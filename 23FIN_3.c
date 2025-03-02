// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

long Kbo(int n, int k, long* M)
{
	int index, i;
	long ret;
	if (n <= k)
		return 1;
	else {
		ret = 0;
		for (i = n - 1; i >= n - k; i--) {
			//index = n - i;
			if (M[i] == 0)
				M[i] = Kbo(i, k, M);
			ret += M[i];
		}
		return ret;
	}

}

int main(void)
{
	int n, k, i;
	scanf("%d %d", &n, &k);

	long* M = (long*)malloc(sizeof(long) * n);
	for (i = 0; i < n; i++)
		M[i] = 0;

	long rslt = Kbo(n, k, M);
	printf("%ld", rslt);
}