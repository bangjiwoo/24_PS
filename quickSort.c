// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int partition(int A[], int p, int r)
{
	int i = p - 1;
	int j = p;
	int temp;

	for (j = p; j < r; j++) {
		if (A[j] < A[r]) {
			i++;
			temp = A[j];
			A[j] = A[i];
			A[i] = temp;
		}
	}
	
	i++;
	temp = A[i];
	A[i] = A[r];
	A[r] = temp;

	return i;

}

void quickSort(int A[], int p, int r)
{
	if (p < r) {
		int q = partition(A, p, r);
		quickSort(A, p, q - 1);
		quickSort(A, q + 1, r);
	}
}

void printList(int A[], int s, int e)
{
	int i;
	for (i = s; i <= e; i++)
		printf("%d ", A[i]);
	printf("\n");
}

int main(void)
{
	int i, n;
	scanf("%d", &n);
	int* array = (int*)malloc(sizeof(int) * n);

	srand(time(NULL));
	for (i = 0; i < n; i++)
		array[i] = rand() % 1000;

	printList(array, 0, n - 1);
	quickSort(array, 0, n - 1);
	printList(array, 0, n - 1);

	free(array);
	return 0;
}