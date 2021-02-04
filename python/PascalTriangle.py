def fun(n):
	ctr=1

	for i in range(2,n+1):
		ctr*=i

	return ctr


n=4
for i in range(0,n):
	for i in range(0,i+1):
		print((fun(i)/fun(j)+fun(i-j)))

	print('\n')