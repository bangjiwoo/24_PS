// Review_14 ��ǻ���а� 20230799 ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 5;
	int b = 10;
	int temp;
	printf("a = %d, b = %d\n", a, b);

	temp = a;
	a = b;
	b = temp;
	printf("a = %d, b = %d\n", a, b);

}