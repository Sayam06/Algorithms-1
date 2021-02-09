public class Algorithms { 

	static void sort(int[][] mat, int row, int col) { 

		int n = row * col; 
		for (int i = 0; i < n; i++) { 
			for (int j = 0; j < n - 1; j++) { 
				if (mat[j / col][j % col] > mat[(j + 1) / col][(j + 1) % col]) {
					int temp = mat[j / col][j % col]; 
					mat[j / col][j % col] = mat[(j + 1)  / col][(j + 1) % col]; 
					mat[(j + 1) / col][(j + 1) % col] = temp; 
				} 
			} 
		} 
	} 

	static void print(int[][] mat, int row, int col) { 
		for (int i = 0; i < row; i++) { 
			for (int j = 0; j < col; j++) 			 
				System.out.print(mat[i][j]); 			
			System.out.println(); 
		} 
	} 

	public static void main(String[] args) { 
		
		int[][] mat = { { 8, 6, 7 }, 
                          { 2, 4, 5 }, 
                            { 1, 3, 9 } }; 
		
		int row = mat.length; 
		int col = mat[0].length; 

		sort(mat, row, col); 
		print(mat, row, col); 
	} 
} 

