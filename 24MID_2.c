// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int numlen(int n)
{
	int i;
	for (i = 0; n > 0; i++)
		n /= 10;

	return i;
}

/*int main(void)
{
	int n, k, i;
	scanf("%d %d", &k, &n);
	
	int rslt = 0;
	int flagN = n;
	while (flagN < k) {
		rslt += numlen(flagN);
		flagN += n;
	}

	printf("%d",rslt);

}*/

int main(void)
{
	int n, k, i;
	scanf("%d %d", &k, &n);

	char rslt[100];
	int flagN = n;
	while (flagN < k) {
		int tens = 1;
		int len = numlen(flagN);

	}
}