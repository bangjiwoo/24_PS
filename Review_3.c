// Review_3 ��ǻ���а� 20230799 ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	int i = 0;
	int n;
	int result = 0;
	scanf("%d", &n);

	while (i < n) {
		result += 3;
		i++;
	}

	printf("%d", result);



}