#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void selectionSort(int array[], int len);

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

	selectionSort(array, n);

	printf("\n정렬 후\n");
	for (i = 0; i < n; i++)
		printf("%d ", array[i]);

}

/*void selectionSort(int array[], int len) // 강의자료 version2
{
	int i, j, maxIndex, max, temp;
	for (i = len - 1; i > 0; i--) {
		maxIndex = 0;
		max = array[maxIndex];
		for (j = 0; j <= i; j++) 
			if (array[j] > max) {
				maxIndex = j;
				max = array[j];
			}
		temp = array[i];
		array[i] = max;
		array[maxIndex] = temp;

	}
}*/

void selectionSort(int  array[], int len) //작은값을 앞쪽부터 바꾸기
{
	int i, j, minIndex, min, temp;
	for (i = 0; i < len - 1; i++) {
		minIndex = i;
		min = array[minIndex];

		for (j = i; j < len; j++) 
			if (array[j] < min) {
				min = array[j];
				minIndex = j;

			}
		temp = array[i];
		array[i] = min;
		array[minIndex] = temp;
	}
}