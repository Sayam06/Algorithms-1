def sort(mat, row, col): 	
	n = row * col 
	for i in range(0, n): 
		for j in range(0, n-1): 
			
			if ( mat[j//col][j % col] >\ mat[(j + 1)//col][(j + 1)% col] ):				
				temp = mat[j//col][j % col] 
				mat[j//col][j % col] =\ mat[(j + 1)//col][(j + 1)% col] 
				mat[(j + 1)//col][(j + 1)% col] =\ temp 

def print(mat, row, col): 	
	for i in range(row): 
		for j in range(col): 
			print(mat[i][j]) 
		print() 


mat = [ [ 8, 6, 7], 
			[2, 4, 5], 
			[1, 3, 9] ] 
row = len(mat) 
col = len(mat[0])  

sort(mat, row, col) 	 
print(mat, row, col) 
