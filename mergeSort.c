// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void merge(int A[], int p, int q, int r, int temp[])
{
	int i = p, j = q + 1;
	int t = p;

	while (i<=q && j<=r) {
	
		if (A[i] < A[j])
			temp[t++] = A[i++];

		else
			temp[t++] = A[j++];
	}

	if (i > q) { //왼쪽 subarray처리가 끝남
		for (; j <= r; j++)
			temp[t++] = A[j];
	}
	else
		for (; i <= q; i++)
			temp[t++] = A[i];


	for (i = p; i <= r; i++)
		A[i] = temp[i];


}

void mergeSort(int A[], int p, int r, int temp[])
{
	
	if (p < r) {
		int q = (p + r) / 2;
		mergeSort(A, p, q, temp);
		mergeSort(A, q+1, r, temp);
		merge(A, p, q, r, temp);

	}
}

int main(void)
{
	int* arr, * temp;
	int n, i;

	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * n);
	temp = (int*)malloc(sizeof(int) * n);

	srand(time(NULL));
	for (i = 0; i < n; i++)
		arr[i] = rand() % 1000;

	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	//insertion_sort(arr, n);
	mergeSort(arr, 0, n - 1, temp);

	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	free(arr);
	free(temp);
	return 0;


}