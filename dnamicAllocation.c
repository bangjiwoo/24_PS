// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int num, i;
	printf("Enter a number : ");
	scanf("%d", &num);
	int* array = (int*)malloc(sizeof(int) * num);

	//srand(time(NULL));
	for (i = 0; i < num; i++)
		array[i] = rand() % 1000;

	for (i = 0; i < num; i++)
		printf("%d ", array[i]);
}