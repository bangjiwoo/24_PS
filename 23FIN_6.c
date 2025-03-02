// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max = -99;

int makeNum(char s[], int bucket[])
{
	int num = 0;

	int i, index;
	for (i = 0; i < strlen(s); i++) {
		index = s[i] - 'A';
		
		num *= 10;
		num += bucket[index];
	}

	return num;
}

void pick(int n, int bucket[], char s1[], char s2[], int m, int topick)
{
	int lastIndex, i, j;
	
	int num1, num2, total;
	if (topick == 0) {
		num1 = makeNum(s1, bucket);
		num2 = makeNum(s2, bucket);

		total = num1 + num2;

		if (total > max)
			max = total;
		return;
	}

	lastIndex = m - topick - 1;

	for (i = 1; i <= n; i++) {
		int flag = 0;
		for (j = 0; j <= lastIndex; j++) 
			if (bucket[j] == i) {
				flag = 1;
				break;
			}
		if (flag == 1)
			continue;

		bucket[lastIndex + 1] = i;
		pick(n, bucket, s1, s2, m, topick - 1);
	}


}

int main(void)
{
	char s1[9], s2[9];

	scanf("%s", s1);
	scanf("%s", s2);

	int bucket[5];

	pick(5, bucket, s1, s2, 5, 5);

	printf("%d", max);


}