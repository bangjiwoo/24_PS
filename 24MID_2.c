// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD

int numlen(int num)
{
	int i;
	for (i = 0; num > 0; i++) 
		num /= 10;
	
	return i;
}

int main(void)
{
	int n, k;
	scanf("%d %d", &n, &k);

	int flagN = k, len, i, rsltN;
	int tens=1;
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

	printf("%d", count);
=======
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
>>>>>>> 56a51aa7fa7abeb8be3ab95da380b3b9b5bdd68e
}