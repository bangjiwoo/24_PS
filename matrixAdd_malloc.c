// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void matrixAdd(int** a, int** b, int** x, int r, int c)
{
	int i, j;
	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			x[i][j] = a[i][j] + b[i][j];
}

void printMatrix(int** a, int r, int c) 
{
	int i, j;
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++)
			printf("%4d", a[i][j]);
		printf("\n");
	}
}
void readMatrix(int** a, int r, int c) 
{
	int i, j;
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++)
			scanf("%d", &a[i][j]);
	}
}

int main(void)
{
	int** A, ** B;
	int** X; // A + B
	int aRow, aCol;
	int i, j;
	printf("Enter 행렬 A의 행과 열의 개수: ");
	scanf("%d %d", &aRow, &aCol);
	// 동적으로 행렬 A(aRow x aCol)와 B(aRow x aCol)와 
   // X(aRow x aCol)를 생성

	A = (int**)malloc(sizeof(int*) * aRow);
	B = (int**)malloc(sizeof(int*) * aRow);
	X = (int**)malloc(sizeof(int*) * aRow);

	for (i = 0; i < aRow; i++) {
		A[i] = (int*)malloc(sizeof(int) * aCol);
		B[i] = (int*)malloc(sizeof(int) * aCol);
		X[i] = (int*)malloc(sizeof(int) * aCol);
	}
	
	printf("(%d x %d) 행렬 A 입력 : \n", aRow, aCol);
	readMatrix(A, aRow, aCol);
	printf("(%d x %d) 행렬 B 입력 : \n", aRow, aCol);
	readMatrix(B, aRow, aCol);

	matrixAdd(A, B, X, aRow, aCol);
	printf("행렬합:\n");
	printMatrix(X, aRow, aCol);
	printf("\n");

	free(A);
	free(B);
	free(X);
}