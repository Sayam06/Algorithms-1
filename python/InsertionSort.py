def sort(arr): 
 
	for i in range(1, len(arr)): 

		key = arr[i] 
		j = i-1

		while j >= 0 and key < arr[j] : 
				arr[j + 1] = arr[j] 
				j -= 1
		arr[j + 1] = key 


arr = [20 ,2001, 12, 1, 2002, 22, 2001, 10] 
sort(arr) 
for x in arr: 
	print (x) 

