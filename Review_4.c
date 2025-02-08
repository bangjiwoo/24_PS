// Review_4 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int result = 1;
	int i = 0;
	int n;
	scanf("%d", &n);

	while (i < n) {
		result *= 5;
		i++;
	}

	printf("%d", result);

}