// Review_1 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, i = 1, sum = 0;
	scanf("%d", &n);

	while (i <= n) {
		sum += i;
		i++;
	}
	

	printf("%d", sum);

}
