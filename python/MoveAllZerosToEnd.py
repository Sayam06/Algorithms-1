def end(arr, n): 
	ctr = 0 
	
	for i in range(n): 
		if arr[i] != 0: 
			
			arr[ctr] = arr[i] 
			ctr+=1
	
	while ctr < n: 
		arr[ctr] = 0
		ctr += 1
		
arr = [1, 2, 3, 0, 0, 0, 10, 9, 8, 0, 5, 0] 
n = len(arr) 
end(arr, n) 


