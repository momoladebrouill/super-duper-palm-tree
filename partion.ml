	
(*let partition_deux n =
	let s=ref 0 in
	for i=1 to n do
		for j=i to n do
			if j+i=n then s:= !s + 1
		done
	done;
	!s;
;;*)

let f x y=
	begin
	print_int x;
	print_char ' ';
	print_int y;
	print_newline ();
	end;
	1
	
let rec partition_deux n a b =
	if a=n then 0 
	else
		let v = 
			(if a+b=n then f a b else 0)
		in
		let a',b' = (if b=n then (a+1,a+1) else (a,b+1)) in
		v + (partition_deux n a' b')

let rec fl l= 
	match l with
	| [] -> print_newline ();
	| t::q -> print_int t; print_char ' '; fl q
	

let goodfl l=
	print_string "V - ";
	fl l;
	1

let badfl l=
	print_string "X   ";
	fl l;
	0



let partition (n:int) (q:int) =
	(*
		On fera une liste l de membres de la somme et on compte le nombre de fois où cette somme tombe juste
		On supposera n>=q
	*)
	if n=q || q=1 then 1 else (* cas de base, petite opti*)
	let good l = if (List.fold_left ( + ) 0 l) = n then goodfl l else 0 in (*cas correct ?*)
	
	(*Modification des facteurs*)
	let pmod a b = if a=n then b else a+1 in 
	let rec increment (l:int list) (p:int): (int list) =
		match l with
		| [] -> []
		| [x] -> [pmod x p]
		| t::q -> let t' = if List.hd q >= n then pmod t p else t in
			 t'::increment q t'  
	in
	
	(*Essais*)
	let rec partion (l:int list) : int =
		if List.hd l >= n then 0 (*si le premier membre a atteint n, on a fini*)
		else good l + partion (increment l 0) (*recursion des cas*) 
	in
	partion (List.init q (fun _->1))
	
	
	
	
	
	
	
	

