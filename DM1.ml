
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

let rec permute tous =
  if tous = [] then [[]]
  else 
    List.concat (*assemblage*)
    ( 
      List.map (*pour chacun*)
        (
          fun t -> List.map (List.cons t) (*ajouter*) 
          (permute (List.filter ((<>) t) tous))
        )
        tous
    )



(*let fib =
  let rec fib_aux n suite =
    match n with
    | 0 -> suite 0
    | 1 -> suite 1

let rec fact_aux n suite =
    if n = 0 then suite 1
    else fact_aux (n-1) (fun v -> suite (n * v))
let fact n = fact_aux n (fun v -> v)
*)
