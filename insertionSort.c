// ��ǻ���а� 20230799 ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionSort(int* A, int n) //�迭 A�� �����Ѵ� 
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
	printf("\n���ĵ� ��:\n");
	for (i = 0; i < n; i++)
		printf("%d ", array[i]);

}