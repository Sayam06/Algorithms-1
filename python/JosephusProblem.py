def jos(a, b):

	if (a == 1):
		return 1
	
		return (jos(a - 1, b) + b-1) % a + 1


print(jos(n, k))

