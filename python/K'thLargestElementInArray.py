def largest(arr, n, k): 

	arr.sort(reverse = True) 
	return arr[k-1] 
 
arr = [1,2002,12,6,9,30,10,30] 
n = len(arr) 
k = 3
print(largest(arr, n, k)) 

