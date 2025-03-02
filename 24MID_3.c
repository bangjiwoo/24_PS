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
=======
#include <string.h>

int numlen(int n)
{
	int i;
	for (i = 0; n > 0; i++)
		n /= 10;
>>>>>>> 56a51aa7fa7abeb8be3ab95da380b3b9b5bdd68e

	return i;
}

<<<<<<< HEAD

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
=======
void numToStr(int n, char str[])
{
	int flagN = n;
	int tens = 1;
	int len = numlen(n);
	int i;

	for (i = 1; i < len; i++)
		tens *= 10;

	for (i = 0; i < len; i++) {
		str[i] = flagN / tens;
		flagN -= (flagN / tens) * tens;
		tens /= 10;
	}
	str[i] = '\0';

}

int findKey(char num[], char key[], int numlen, int keylen) {
	int i, j;
	int flag;
	for (i = 0; i<=numlen-keylen; i++) {
		flag = 1;
		for (j = 0; j < keylen; j++) {
			
			if (num[i + j] != key[j]) {
				flag = -1;
				break;
			}
		}
		if (flag == 1)
			return (i + 1);

		
	}
	return -1;
}

int main(void)
{
	int n, k, m, i, j;
	scanf("%d", &k);
	scanf("%d", &n);
	scanf("%d", &m);
	//% d% d", &k, &n, &m);

	char rslt[100];
	int flagN = n, rsltIndx = 0;
	while (flagN < k) {
		int insertN = flagN;
		int tens = 1;
		int len = numlen(flagN);

>>>>>>> 56a51aa7fa7abeb8be3ab95da380b3b9b5bdd68e
		for (i = 1; i < len; i++)
			tens *= 10;

		for (i = 0; i < len; i++) {
<<<<<<< HEAD
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
=======
			rslt[rsltIndx] = insertN / tens;
			insertN -= (insertN / tens) * tens;
			tens /= 10;
			rsltIndx++;
		}
		flagN += n;

	}
	rslt[rsltIndx] = '\0';
	//int rsltlen = strlen(rslt);
	int keylen = numlen(m);
	char* key = (char*)malloc(sizeof(char) * (keylen + 1));
	numToStr(m, key);

	printf("%d", findKey(rslt, key, rsltIndx, keylen));
	



}
>>>>>>> 56a51aa7fa7abeb8be3ab95da380b3b9b5bdd68e
