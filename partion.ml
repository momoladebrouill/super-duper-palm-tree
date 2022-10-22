	
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

let sum l = (List.fold_left ( + ) 0 l)
let min a b = if a<b then a else b

let partition (n:int) (q:int) =

	let rec increment (l:int list) (prec:int) : (int list) =
		match l with
		| [] -> []
		| h::t ->
			let coef =
				if prec >= n then  
					if h >= n then List.hd t else h+1
		 		else h
		 	in coef::(increment t coef)  
	in
			
	let rec partion (l:int list) : int =
		if List.hd (List.rev l) >= n then 0 (*dernier membre de la somme*)
		else 
			(if sum l = n then goodfl l else badfl l) + partion (increment l (n+5)) 
	in 
		partion (List.init q (fun _->1))
				
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
