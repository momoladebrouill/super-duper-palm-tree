
(*Implémentation naive*)
let fib1 =
  let rec fib_aux n =
    match n with 
    0 | 1 -> n
    | n -> fib_aux (n-1) + fib_aux (n-2)
  in fib_aux 

(*Implémentation en recursion simple*)
let fib2 n =
  let rec fib_aux n =
    match n with
    | 0 -> (0,0)
    | 1 -> (0,1)
    | n -> let a,b = fib_aux (n-1) in (a+b,a)
  in 
    let a,b = fib_aux n in a

(*Liste des permutation des éléments*)
let rec permute all =
  if all = [] then [[]] else
  let join l1 l2 = [l1;l2] in 
  let remove elem l = List.filter ((<>) elem) l in
  List.concat (*assemblage*)(
    List.map (*combinaisons*)
      (fun t -> List.map 
        (List.cons t)
        (permute (remove t all)))
      all
  )


let permute l =
  let remove l elem = List.filter ((<>)elem) l in
  let do_for all fu = List.concat (List.map fu all)in
  let rec perm h =
    do_for h
      (fun e -> e::h)
  in perm l










