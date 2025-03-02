// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int* A, int n) 
{
	int i, j, max_idx, max, temp;
	for (i = 0; i < n - 1; i++) {
		max_idx = 0;
		max = A[0];
		for (j = 1; j < n - i; j++) {
			if (max < A[j]) {
				max = A[j];
				max_idx = j;
			}
		}
		temp = A[n - i - 1];
		A[n - i - 1] = max;
		A[max_idx] = temp;

	}
}

int main(void)
{
	int i, n;
	printf("Enter a number: ");
	scanf("%d", &n);

	int* array = (int*)malloc(sizeof(int) * n);

	srand(time(NULL));
	for (i = 0; i < n; i++)
		array[i] = rand() % 1000;

	for (i = 0; i < n; i++)
		printf("%d ", array[i]);

	selectionSort(array, n);
	printf("\n정렬된 후\n");
	for (i = 0; i < n; i++)
		printf("%d ", array[i]);


}