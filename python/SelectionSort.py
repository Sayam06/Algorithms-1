arr = [50,12,22,10,2002,1,20,7] 

for i in range(len(arr)): 	 
	min = i 
	for j in range(i+1, len(arr)): 
		if arr[j] < arr[min]: 
			min = j 
			
	arr[i], arr[min] = arr[min], arr[i] 

for x in arr: 
	print(x)
