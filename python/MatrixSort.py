def sort(data, row, col): 	
	n = row * col 
	for i in range(0, n): 
		for j in range(0, n-1): 
			
			if ( data[j//col][j % col] >\ data[(j + 1)//col][(j + 1)% col] ):				
				temp = data[j//col][j % col] 
				data[j//col][j % col] =\ data[(j + 1)//col][(j + 1)% col] 
				data[(j + 1)//col][(j + 1)% col] =\ temp 

def print(mat, row, col): 	
	for i in range(row): 
		for j in range(col): 
			print(mat[i][j]) 
		print() 


mat = [ [5, 4, 7], 
			[1, 3, 8], 
			[2, 9, 6] ] 
row = len(mat) 
col = len(mat[0])  
sort(mat, row, col) 
	 
print(mat, row, col) 
