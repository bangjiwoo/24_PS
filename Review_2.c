// Review_2 ��ǻ���а� 20230799 ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	int product = 1, i = 1, n;
	scanf("%d", &n);

	while (i <= n) {
		product *= i;
		i++;
	}

	printf("%d", product);


}