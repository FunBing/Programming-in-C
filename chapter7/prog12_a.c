#include<stdio.h>

void transposeMatrix(int matrixA[4][5], int matrixB[5][4])
{
	int i, j;
	for(i = 0;i < 4;i++)
	{
		for(j = 0;j < 5;j++)
		{
			matrixB[j][i] = matrixA[i][j];
		}
	}
}

void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols])
{
	int row, column;

	for(row = 0;row < nRows;row++)
	{
		for(column = 0;column < nCols;column++)
		{
			printf("%5i ", matrix[row][column]);
		}

		printf("\n");
	}
}

int main(void)
{
	int matrixA[4][5] = 
	{
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
		{16,17,18,19,20}
	};
	int matrixB[5][4];
	void transposeMatrix(int matrixA[4][5], int matrixB[5][4]);
	void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols]);
	

	transposeMatrix(matrixA, matrixB);

	printf("matrixA:\n");
	displayMatrix(4, 5 ,matrixA);
	printf("matrixB:\n");
	displayMatrix(5 ,4, matrixB);

	return 0;
}
