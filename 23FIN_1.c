// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

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

int search_binary(int key, int low, int high, int* A)
{
	int middle;
	if (low <= high) {
		middle = (low + high) / 2;
		if (key == A[middle])
			return middle;
		else if (key < A[middle])
			return search_binary(key, low, middle - 1, A);
		else
			return search_binary(key, middle + 1, high, A);
	}

	return -1;
}

int main(void)
{
	int M, N, i, j;
	scanf("%d", &M);
	int* mart = (int*)malloc(sizeof(int) * M);
	for (i = 0; i < M; i++)
		scanf("%d", &mart[i]);
	
	scanf("%d", &N);
	int* item = (int*)malloc(sizeof(int) * N);
	for (i = 0; i < N; i++)
		scanf("%d", &item[i]);

	quickSort(mart, 0, M-1);

	int count = 0;
	for (i = 0; i < N; i++) {
		if (search_binary(item[i], 0, M - 1, mart) != -1)
			count++;
	}

	printf("%d", count);


}