// ��ǻ���а� 20230799 ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void bubble(int* A, int n)
{
	int i, j, temp;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (A[j] > A[j + 1]) {
				temp = A[j + 1];
				A[j + 1] = A[j];
				A[j] = temp;
			}

		}

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

	bubble(array, n);
	printf("\n���ĵ� ��\n");
	for (i = 0; i < n; i++)
		printf("%d ", array[i]);

}