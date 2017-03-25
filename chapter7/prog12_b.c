#include<stdio.h>

void transposeMatrix(int nRows, int nCols, int matrixA[nRows][nCols], int matrixB[nCols][nRows])
{
	int i, j;
	for(i = 0;i < nRows;i++)
	{
		for(j = 0;j < nCols;j++)
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
	void transposeMatrix(int nRows, int nCols, int matrixA[nRows][nCols], int matrixB[nCols][nRows]);
	void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols]);
	

	transposeMatrix(4, 5, matrixA, matrixB);

	printf("matrixA:\n");
	displayMatrix(4, 5 ,matrixA);
	printf("matrixB:\n");
	displayMatrix(5 ,4, matrixB);

	return 0;
}
