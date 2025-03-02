// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int findMax(int* array, int lastIndex)
{
	int i, max = -999;
	for (i = 0; i <= lastIndex; i++)
		if (array[i] > max)
			max = array[i];

	return max;
}

int main(void)
{
	int n, i;
	scanf("%d", &n);

	int* array = (int*)malloc(sizeof(int) * n);
	int* rslt = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++) {
		scanf("%d", &array[i]);
		rslt[i] = findMax(array, i);
	}

	for (i = 0; i < n; i++)
		printf("%d ", rslt[i]);

}