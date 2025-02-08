// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionSort(int* A, int n) //배열 A을 정렬한다 
{
	int i;
	int j, k, temp;
	for (i = 1; i < n; i++)
	{
		for (j = 0; j < i; j++)
			if (A[j] > A[i]) break;
		temp = A[i];
		for (k = i; k > j; k--)
			A[k] = A[k - 1];
		A[j] = temp;
	}
}

int main(void)
{
	int n, i;
	printf("Enter a number: ");
	scanf("%d", &n);
	int* array = (int*)malloc(sizeof(int*) * n);

	srand(time(NULL));
	for (i = 0; i < n; i++)
		array[i] = rand() % 1000;

	for (i = 0; i < n; i++)
		printf("%d ", array[i]);

	insertionSort(array, n);
	printf("\n정렬된 후:\n");
	for (i = 0; i < n; i++)
		printf("%d ", array[i]);

}