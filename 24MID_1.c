// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int findMax(int* A, int lastIndex)
{
	int i, max = -999;
	for (i = 0; i <= lastIndex; i++)
		if (A[i] > max)
			max = A[i];

	return max;
}

int main(void)
{
	int n, i;
	scanf("%d", &n);

	int* A = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);

	for (i = 0; i < n; i++)
		printf("%d ", findMax(A, i));
}