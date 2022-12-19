let partition (n:int) (q:int) =
	(*
		On fera une liste l de membres de la somme et on compte le nombre de fois où cette somme tombe juste
		On supposera n>=q
	*)
	if n=q || q=1 then 1 else (* cas de base*)
	let is_good (l:int list) : int = if (List.fold_left ( + ) 0 l) = n then 1 else 0 in
	
	(*Modification des facteurs*)
	let (++|) a b = if a=n then b else a+1 in 
	let rec increment (l:int list) (p:int): (int list) =
		match l with
		| [] -> []
		| [x] -> [x ++| p]
		| t::q -> let t' = if List.hd q >= n then t ++| p else t in
			 t'::increment q t'  
	in
	
	(*Essais*)
	let rec partion (l:int list) : int =
		if List.hd l >= n then 0 (*si le premier membre a atteint n, on a fini*)
		else is_good l + partion (increment l 0) (*recursion des cas*) 
	in
	partion (List.init q (fun _->1))


let _ =
  for i=1 to 10 do
    for j=1 to 10 do
      print_int (partition i j);
      print_char '|';
    done;
    print_newline ();
  done;
	
	
	
	
	
	

