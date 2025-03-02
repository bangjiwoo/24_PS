<<<<<<< HEAD
=======
// 컴퓨터학과 20230799 방지우
>>>>>>> b264d1416f30fd8962851fd5a579817de9c6add6
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
void insertionSort(int array[], int len);
=======

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
>>>>>>> b264d1416f30fd8962851fd5a579817de9c6add6

int main(void)
{
	int n, i;
	printf("Enter a number: ");
	scanf("%d", &n);
<<<<<<< HEAD

	int* array = (int*)malloc(sizeof(int) * n);
=======
	int* array = (int*)malloc(sizeof(int*) * n);

>>>>>>> b264d1416f30fd8962851fd5a579817de9c6add6
	srand(time(NULL));
	for (i = 0; i < n; i++)
		array[i] = rand() % 1000;

	for (i = 0; i < n; i++)
		printf("%d ", array[i]);

	insertionSort(array, n);
<<<<<<< HEAD

	printf("\n정렬 후\n");
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
=======
	printf("\n정렬된 후:\n");
	for (i = 0; i < n; i++)
		printf("%d ", array[i]);
>>>>>>> b264d1416f30fd8962851fd5a579817de9c6add6

}