// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int numlen(int num)
{
	int i;
	for (i = 0; num > 0; i++)
		num /= 10;

	return i;
}


int main(void)
{
	int n, k, m;
	scanf("%d %d %d", &n, &k, &m);

	int flagN = k, len, i, rsltN;
	int tens = 1;
	int count = 0;
	int A[100000];

	while (flagN < n) {
		len = numlen(flagN);
		rsltN = flagN;

		tens = 1;
		for (i = 1; i < len; i++)
			tens *= 10;

		for (i = 0; i < len; i++) {
			A[count] = rsltN / tens;
			rsltN -= A[count] * tens;
			tens /= 10;
			count++;
		}

		flagN += k;
	}
	A[count] = '\0';

	int Mlen = numlen(m);
	int j, num, rslt = -1;
	for (i = 0; i < count - 3; i++) {
		num = 0;
		for (j = 0; j < 3; j++) {
			num *= 10;
			num += A[i + j];
		}

		if (num == m) {
			rslt = i + 1;
			break;
		}
	}
	printf("%d", rslt);
	
}
