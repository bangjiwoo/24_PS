// Review_4 ��ǻ���а� 20230799 ������
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