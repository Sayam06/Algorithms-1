def hanoi(n , src, dest, help):
	if n == 1:
		print("Move disk 1 from rod",src,"to rod",dest)
	return
	hanoi(n-1, src, help, dest)
	print("Move disk",n,"from rod",src,"to rod",dest)
	hanoi(n-1, help, dest, src)
		
n = 4
hanoi(n, 'A', 'C', 'B') 
