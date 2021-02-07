
def answer(ar, n):
	
	for i in range(n):
		for j in range(n):
			if (ar[j] == i):
				ar[j], ar[i] = ar[i], ar[j]


	for i in range(n):		
		if (ar[i] != i):
			ar[i] = -1


	for i in range(n):
		print(ar[i])


ar = [-8, 1, 3, 7, 10, 12, 2, 2001, 2002, -666]

n = len(ar)


answer(ar, n);
