// Review_1 ��ǻ���а� 20230799 ������
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
