// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num[51], result[4];
	char ch;
	int len = 0, total = 0;
	int i;

	while ((ch = getchar()) != '\n') {
		num[len++] = ch - '0';
	}

	if (num[len - 1] % 2 == 0)
		result[0] = 1;
	else
		result[0] = 0;

	for (i = 0; i < len; i++)
		total += num[i];
	if (total % 3 == 0)
		result[1] = 1;
	else
		result[1] = 0;

	int n = num[len - 1] + num[len - 2] * 10;
	if (n % 4 == 0)
		result[2] = 1;
	else
		result[2] = 0;

	if (num[len - 1] == 0 || num[len - 1] == 5)
		result[3] = 1;
	else
		result[3] = 0;

	for (i = 0; i < 4; i++)
		printf("%d", result[i]);

}