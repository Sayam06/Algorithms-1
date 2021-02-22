def ans(arr,n): 
	
	sum = arr[0] 
	for i in range(1,n): 
		sum = sum^arr[i] 
	
	return sum 

arr = [1,2,4,5,2,5,4,1,8] 
print (ans(arr, len(arr))) 

