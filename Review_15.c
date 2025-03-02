// Review_15 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 6
#include <stdio.h>

int main(void)
{
	int a[SIZE] = { 1,2,3,4,5,6 };
	int i, temp;

	for (i = 0; i < SIZE; i++)
		printf("%d ", a[i]);

	for (i = 0; i < SIZE/2; i++) {
		temp = a[i];
		a[i] = a[SIZE - 1 - i];
		a[SIZE - 1 - i] = temp;
	}

	printf("\n");
	for (i = 0; i < SIZE; i++)
		printf("%d ", a[i]);
	 
}