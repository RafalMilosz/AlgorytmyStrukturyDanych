#Pseudokod dla programu "Podejście wsteczne do generowania n bitowych kodów Graya"
~~~
function generateGrayCode(number n)
     variable codes = empty list
     variable code = "0" * n
     codes.add(code)
     for i = n-1 to 0
         code[i] = "1"
         for j = i+1 to n-1
             code[j] = "0"
         end for
         codes.add(code)
     end for
     return codes
~~~

# Pseudokod dla programu "Permutacje ciągu znaków"
~~~
function generatePermutations(string s)
     perms variable = empty list
     if the length of s is equal to 0
         perms.add("")
         return the perm
     end if
  
     for i = 0 to length s-1
         substring = part of s from 0 to i and from i+1 to length s
         subperms = generatePermutations(substring)
         for j = 0 to the length of the subperms
             perms.add(s[i] + subperms[j])
         end for
     end for
     return the perm
~~~
