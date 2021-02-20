def getb(n, i):

	print((n & (1 << (i - 1))) >> (i - 1))

getb(4,2)

