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

		for (i = 1; i < len; i++)
			tens *= 10;

		for (i = 0; i < len; i++) {
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