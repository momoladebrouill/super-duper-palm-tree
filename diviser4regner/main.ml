

let print_table t = Array.iter print_int t;print_newline ()

let simpl a =
    let len =  Array.length a in
    let rec aux i =
        if i=0 then 1
        else if a.(i) = 0 then aux (i-1) else i+1
    in Array.sub a 0 (aux (len-1))

let add a b =
  let la,lb = Array.length a, Array.length b in
  let lc = la+lb in
  let c = Array.init (max la lb +2) (fun _ -> 0) in
  let get t l ind = if ind >= l then 0 else t.(ind) in
  let rec aux i j k r =
      let s =  get a la i  + get b lb j + r in
      c.(k) <- s mod 10;
      if k <= lc then aux (i+1) (j+1) (k+1) (s/10)
  in 
  aux 0 0 0 0;
  c

let mult_digit i a =
    let r = ref 0 in (*retenue*)
    let res = (Array.map (fun x-> 
        begin
            let old_r = !r in
            r:= (x*i+old_r) / 10;
            (x*i+old_r) mod 10
        end) a)
    in if !r=0 then  res else Array.append res [|!r|] 

let mult_dec p a =
    let open Array in
    append (init p (fun _->0) ) a

let mult_naive a b =
    Array.fold_left (fun x y -> add x y) (mult_dec 10 [|0|])  (Array.mapi (fun i x-> mult_dec i (mult_digit x a)) b) 
let () = 
    let t = [|8;9;0;0;0;1;0|] in
    print_table t;
    print_table (simpl t);
    print_table (add [|9;2|] [|5;7|]);
    print_table (mult_digit 5 [|3;2;1|]);
    print_table (mult_dec 3 [|1|]);
    print_table (mult_naive [|1;2|] [|5;7|])

