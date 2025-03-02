// Review_9 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a[5] = { 10,20,30,40,50 };
	int r[5];

	int i;
	for (i = 0; i < 5; i++) 
		r[5 - 1 - i] = a[i];

	for (i = 0; i < 5; i++)
		printf("%d ", r[i]);


}