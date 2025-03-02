#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int isSequence(int a[], int size)
{
	int i, num;

	for (i = 0; i < size - 1; i++) {
		num = a[i];
		if (num % 2 == 0) {
			if (a[i + 1] != num / 2)
				return 0;
		}
		else {
			if (a[i + 1] != (num * 3 + 1))
				return 0;
		}

	}

	return 1;
}

void pick(int n, int item[], int bucket[], int m, int topick)
{
	int i, j, lastIndex;

	if (topick == 0) {
		int newA[1000];

		for (i = 0; i < m; i++)
			newA[i] = item[bucket[i]];

		if (isSequence(newA, m) == 1) {
			for (i = 0; i < m; i++)
				printf("%d ", newA[i]);
			printf("\n");
		}
		return;
	}

	lastIndex = m - topick - 1;


	for (i = 0; i < n; i++) {
		int flag = 0;
		for (j = 0; j <= lastIndex; j++)
			if (bucket[j] == i) {
				flag = 1;
				break;
			}

		if (flag == 1)
			continue;

		bucket[lastIndex + 1] = i;
		pick(n, item, bucket, m, topick - 1);
	}
}

int main(void) 
{
	int N;
	int a[1000];

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &a[i]);

	int* bucket = (int*)malloc(sizeof(int) * N);
	pick(N, a, bucket, N, N);
}