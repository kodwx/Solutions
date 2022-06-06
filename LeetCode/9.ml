(* LeetCode - 9. Palindrome Number *)

let isPalindrome x = 
    if x = 0 
      then true
    else if (x < 0 || x mod 9 = 0)
      then false
    else
      let rev i = 
        let rec rev_aux n = function
          | 0 -> n
          | z -> rev_aux (n * 10 + (z mod 10)) (z / 10) in
        rev_aux 0 i in
      x = rev x