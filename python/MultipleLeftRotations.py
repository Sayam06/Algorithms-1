def preprocess(arr, n): 
	temp = [None] * (2 * n) 
	
	for i in range(n): 
		temp[i] = temp[i + n] = arr[i] 
	return temp 

def leftRotate(arr, n, k, temp): 
	
	start = k % n 
	
	for i in range(start, start + n): 
		print(temp[i], end = " ") 


arr = [1, 2, 5, 7, 8, 10, 12, 22,2001, 2002] 
n = len(arr) 
temp = preprocess(arr, n) 

k = 3
leftRotate(arr, n, k, temp) 
		
k = 5
leftRotate(arr, n, k, temp) 
		
k = 6
leftRotate(arr, n, k, temp) 

