#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void insertionSort(int array[], int len);

int main(void)
{
	int n, i;
	printf("Enter a number: ");
	scanf("%d", &n);

	int* array = (int*)malloc(sizeof(int) * n);
	srand(time(NULL));
	for (i = 0; i < n; i++)
		array[i] = rand() % 1000;

	for (i = 0; i < n; i++)
		printf("%d ", array[i]);

	insertionSort(array, n);

	printf("\nÁ¤·Ä ÈÄ\n");
	for (i = 0; i < n; i++)
		printf("%d ", array[i]);
}

void insertionSort(int array[], int len)
{
	int i, j, k, temp;
	for (i = 1; i < len; i++) {
		for (j = 0; j < i; j++) 
			if (array[j] > array[i])
				break;
		temp = array[i];
		for (k = i; k > j; k--)
			array[k] = array[k - 1];
		array[j] = temp;
	}

}