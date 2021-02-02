import math as mt

def ternary(l, r, x, arr):
 
    if (r >= l):

        mid1 = l + (r - l) //3
        mid2 = r - (r - l) //3
 
        if arr[mid1] == x or arr[mid2] == x: 
            return x

        if x < arr[mid1]: 
            return ternary(l, mid1 - 1, x, arr)         
        elif x > arr[mid2]: 
            return ternary(mid2 + 1, r, x, arr)         
        else:  
            return ternary(mid1 + 1, mid2 - 1, x, arr)
         

    return -1

 
l, r, p = 0, 11, 12 
arr = [ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 ,12 ]
res = ternary(l, r, x, arr)
 

 
print(x,"is present at ", res)
 