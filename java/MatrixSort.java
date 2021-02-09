public class Algorithms { 
	static void sortMat(int[][] data, int row, int col) 
	{ 

		int size = row * col; 

		for (int i = 0; i < size; i++) 
		{ 
			for (int j = 0; j < size - 1; j++) 
			{ 

				if (data[j / col][j % col] > data[(j + 1) 
					/ col][(j + 1) % col]) 
				{ 

					int temp = data[j / col][j % col]; 
					data[j / col][j % col] = data[(j + 1) 
						/ col][(j + 1) % col]; 
					data[(j + 1) / col][(j + 1) % col] = temp; 
				} 
			} 
		} 
	} 

	static void printMat(int[][] mat, int row, int col) 
	{ 

		for (int i = 0; i < row; i++) 
		{ 
			for (int j = 0; j < col; j++) 
			{ 
				System.out.print(mat[i][j] + " "); 
			} 
			System.out.println(); 
		} 
	} 

	public static void main(String[] args) 
	{ 
		
		int[][] mat = { { 5, 4, 7 }, 
						{ 1, 3, 8 }, 
						{ 2, 9, 6 } }; 
		
		int row = mat.length; 
		int col = mat[0].length; 

		sortMat(mat, row, col); 

		printMat(mat, row, col); 
	} 
} 

