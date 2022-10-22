	
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
	| [] -> print_newline (); 1
	| t::q -> print_int t; print_char ' '; fl q


let partition (n:int) (q:int) =
	let rec incre (l:int list) (prec:int) : (int list) =
		match l with
		| [] -> []
		| [x] -> [x+prec]
		| t::q -> (t+prec)::incre q (if t>List.hd q then 1 else 0) 
	in		
	let rec partion (l:int list) : int =
		if List.hd (List.rev l) = n then 0
		else 
			let v = (if n=(List.fold_left ( + ) 0 l) then fl l else 0 ) in
			v + partion (incre l 1) 
	in 
		partion (List.init n (fun x->1))
				
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
