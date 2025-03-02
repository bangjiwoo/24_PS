// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
int findMax(int* A, int lastIndex)
{
	int i, max = -999;
	for (i = 0; i <= lastIndex; i++)
		if (A[i] > max)
			max = A[i];
=======
int findMax(int* array, int lastIndex)
{
	int i, max = -999;
	for (i = 0; i <= lastIndex; i++)
		if (array[i] > max)
			max = array[i];
>>>>>>> 56a51aa7fa7abeb8be3ab95da380b3b9b5bdd68e

	return max;
}

int main(void)
{
	int n, i;
	scanf("%d", &n);

<<<<<<< HEAD
	int* A = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);

	for (i = 0; i < n; i++)
		printf("%d ", findMax(A, i));
=======
	int* array = (int*)malloc(sizeof(int) * n);
	int* rslt = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++) {
		scanf("%d", &array[i]);
		rslt[i] = findMax(array, i);
	}

	for (i = 0; i < n; i++)
		printf("%d ", rslt[i]);

>>>>>>> 56a51aa7fa7abeb8be3ab95da380b3b9b5bdd68e
}