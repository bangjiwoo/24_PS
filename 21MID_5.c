// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void pick(int card[], int n, int bucket[], int m, int topick, int* count);
int makeNum(int card[], int bucket[], int m);
int findLeave(int card[], int bucket[], int n, int m);

int main(void)
{
	int n, i;
	scanf("%d", &n);

	int* bucket = (int*)malloc(sizeof(int) * (n - 1));
	int* card = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++)
		scanf("%d", &card[i]);

	int count = 0;
	pick(card, n, bucket, n - 1, n - 1, &count);

	printf("%d", count);

	free(card);
	free(bucket);

}

int findLeave(int card[], int bucket[], int n, int m)
{
	int i, j, flag;

	for (i = 0; i < n; i++) {
		flag = 0;
		for (j = 0; j < m; j++)
			if (bucket[j] == i)
				flag = 1;
		if (flag == 1) continue;

		return i;
	}


}

int makeNum(int card[], int bucket[], int m)
{
	int num = 0;
	int i;
	for (i = 0; i < m; i++) {
		num *= 10;
		num += card[bucket[i]];
	}

	return num;
}



void pick(int card[], int n, int bucket[], int m, int topick, int* count)
{
	int i, j, lastIndex, flag;

	if (topick == 0) {

		int leave = findLeave(card, bucket, n, m);

		int num = makeNum(card, bucket, m);

		
		if (num % card[leave] == 0) {
			(*count)++;
		}

		return;
	}

	lastIndex = m - topick - 1;

	for (i = 0; i < n; i++) { // flag 변수를 쓰자!!!!!
		for (j = 0; j <= lastIndex; j++)
			if (bucket[j] == i)
				break;
		if (bucket[j] == i)
			continue;
		bucket[lastIndex + 1] = i;
		pick(card, n, bucket, m, topick - 1, count);
	}
}