def sort(arr,n): 
	if n<=1: 
		return
	
	sort(arr,n-1) 
	prev = arr[n-1] 
	j = n-2
	
	while (j>=0 and arr[j]>prev): 
		arr[j+1] = arr[j] 
		j = j-1

	arr[j+1]=prev 
	 

arr = [23,12,10,2002,1,9,22,2001,5] 
n = len(arr) 
sort(arr, n) 

for i in range(n): 
	print arr[i],

