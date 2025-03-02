#define _CRT_SECURE_NO_WARNINGS
void bubbleSort(int array[], int len);
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

	bubbleSort(array, n);

	printf("\nÁ¤·Ä ÈÄ\n");
	for (i = 0; i < n; i++)
		printf("%d ", array[i]);

}

void bubbleSort(int array[], int len)
{
	int i, j, temp;
	for (i = 0; i < len - 1; i++) {
		for (j = 0; j < len - i -1; j++) 
			if (array[j] > array[j + 1]) {
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
			}
		
	}
}