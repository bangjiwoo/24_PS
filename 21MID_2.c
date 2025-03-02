// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int numlen(int n) 
{
	int i;
	for (i = 0; n > 0; i++) 
		n /= 10;
	

	return i;
}

int main(void)
{
	int n;
	scanf("%d", &n);

	n *= 9;
	int nlen = numlen(n);

	int* array = (int*)malloc(sizeof(int) * nlen);

	for (int i = nlen-1; i >= 0; i--) {
		array[i] = n % 10;
		n /= 10;
	}

	for (int i = 0; i < nlen; i++) 
		printf("%d ", array[i]);
	


}