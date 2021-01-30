def smallest(arr, n, k):   
    arr.sort() 
  
    return arr[k-1] 

a = [10,5,7,20,13] 
n = len(a) 
k = 3
print("K'th smallest element is", smallest(a, n, k)) 