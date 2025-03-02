// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

long fibo3(int n, long* M)
{
	int index;
	if (n <= 3)
		return 1;
	else {
		index = n - 3;
		if (M[index] == 0)
			M[index] = fibo3(index, M);

		index = n - 2;
		if (M[index] == 0)
			M[index] = fibo3(index, M);

		index = n - 1;
		if (M[index] == 0)
			M[index] = fibo3(index, M);

		return M[n - 3] + M[n - 2] + M[n - 1];
	}
		
}

int main(void)
{
	int n, i;
	scanf("%d", &n);

	long* M = (long*)malloc(sizeof(long) * n);
	for (i = 0; i < n; i++)
		M[i] = 0;

	long rslt = fibo3(n, M);
	printf("%ld", rslt);
}