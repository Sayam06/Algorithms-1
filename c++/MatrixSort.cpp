#include <iostream> 
using namespace std; 

void sort(int mat[3][3], int row, int col) { 
	int size = row * col; 
	for (int i = 0; i < size; i++) { 
		for (int j = 0; j < size - 1; j++) { 
			if (mat[j / col][j % col] > mat[(j + 1) / col][(j + 1) % col]) { 
				int temp = mat[j / col][j % col]; 
				mat[j / col][j % col] = mat[(j + 1) / col][(j + 1) % col]; 
				mat[(j + 1) / col][(j + 1) % col] = temp; 
			} 
		} 
	} 
} 

void print(int mat[3][3], int row, int col) {

	for (int i = 0; i < row; i++) { 
		for (int j = 0; j < col; j++) 		 
			cout<<mat[i][j];		
		cout << endl; 
	} 
} 

int main() { 
	int mat[3][3] = { { 8, 6, 7 }, 
						{ 2, 4, 5 }, 
						{ 1, 3, 9 } }; 
                        
	sort(mat, 3, 3); 
	print(mat, 3, 3); 
	return 0; 
} 
