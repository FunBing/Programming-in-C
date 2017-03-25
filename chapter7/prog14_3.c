#include<stdio.h>


int gMatrixA[4][5] = 
{
	{1,2,3,4,5},
	{6,7,8,9,10},
	{11,12,13,14,15},
	{16,17,18,19,20}
};
int gMatrixB[5][4];
int gNRows = 4, gNCols = 5;

void transposeMatrix()
{
	int i, j;
	for(i = 0;i < gNRows;i++)
	{
		for(j = 0;j < gNCols;j++)
		{
			gMatrixB[j][i] = gMatrixA[i][j];
		}
	}
}

void displayMatrixA()
{
	int row, column;

	for(row = 0;row < gNRows;row++)
	{
		for(column = 0;column < gNCols;column++)
		{
			printf("%5i ", gMatrixA[row][column]);
		}

		printf("\n");
	}
}

void displayMatrixB()
{
	int row, column;

	for(row = 0;row < gNCols;row++)
	{
		for(column = 0;column < gNRows;column++)
		{
			printf("%5i ", gMatrixB[row][column]);
		}

		printf("\n");
	}
}



int main(void)
{
	void transposeMatrix();
	void displayMatrixA();
	void displayMatrixB();

	

	transposeMatrix();

	printf("matrixA:\n");
	displayMatrixA();
	printf("matrixB:\n");
	displayMatrixB();

	return 0;
}
