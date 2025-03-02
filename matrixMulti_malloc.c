// ��ǻ���а� 20230799 ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

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

void matrixMulti(int** A, int** C, int** X, int r, int c, int n)
{
	int i, j, k, total;
	for (i = 0; i < r; i++) 
		for (j = 0; j < c; j++) {
			X[i][j] = 0;
			for (k = 0; k < n; k++)
				X[i][j] += A[i][k] * C[k][j];
			
		}

	
}

int main(void)
{
	int** A, ** C;
	int** X; 
	int aRow, aCol, cRow, cCol;
	int i, j;
	printf("Enter ��� A�� ��� ���� ����: ");
	scanf("%d %d", &aRow, &aCol);
	printf("Enter ��� C�� ��� ���� ����(C�� ���� %d�̾��): ", aCol);
	scanf("%d %d", &cRow, &cCol);

	A = (int**)malloc(sizeof(int*) * aRow);
	for (i = 0; i < aRow; i++) 
		A[i] = (int*)malloc(sizeof(int) * aCol);

	C = (int**)malloc(sizeof(int*) * cRow);
	for (i = 0; i < cRow; i++) 
		C[i] = (int*)malloc(sizeof(int) * cCol);
	
	X = (int**)malloc(sizeof(int*) * cRow);
	for (i = 0; i < cRow; i++)
		X[i] = (int*)malloc(sizeof(int) * cCol);


	printf("(%d x %d) ��� A �Է� : \n", aRow, aCol);
	readMatrix(A, aRow, aCol);
	printf("(%d x %d) ��� C �Է� : \n", cRow, cCol);
	readMatrix(C, cRow, cCol);

	matrixMulti(A, C, X, aRow, cCol, aCol);
	printf("��İ�:\n");
	printMatrix(X, aRow, cCol);
	printf("\n");

	printf("��ġ���: \n");
	for (i = 0; i < aCol; i++) {
		for (j = 0; j < aRow; j++)
			printf("%4d", A[j][i]);
		printf("\n");
	}

	free(A);
	free(C);
	free(X);

}