def answer(arr, n):
	
	for i in range(n):
		for j in range(n):
			if (arr[j] == i):
				arr[j], arr[i] = arr[i], arr[j]


	for i in range(n):		
		if (arr[i] != i):
			arr[i] = -1


	for i in range(n):
		print(arr[i])


arr = [-8, 1, 3, 7, 10, 12, 2, 2001, 2002, -666]

n = len(arr)

answer(arr, n);
