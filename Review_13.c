// Review_13 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#include <stdio.h>

int main(void)
{
	int n, i;
	int odd[SIZE], even[SIZE];
	int oddIndex = 0;
	int evenIndex = 0;

	for (i = 0; i < SIZE; i++) {
		scanf("%d", &n);

		if (n % 2 == 0)
			even[evenIndex++] = n;
		else
			odd[oddIndex++] = n;
	}

	for (i = 0; i < evenIndex; i++)
		printf("%d ", even[i]);
	printf("\n");
	for (i = 0; i < oddIndex; i++)
		printf("%d ", odd[i]);
}