// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <stdlib.h> 

int isSequence(int a[], int size) {
	int i, num;
	for (i = 0; i < size - 1; i++) {
		num = a[i];
		if (num % 2 == 0) {
			if (a[i + 1] != num / 2)
				return 0;
		}
		else if (num != 1) {
			if (a[i + 1] != (num * 3 + 1))
				return 0;
		}
		else
			return 0;

	}

	return 1;
}

void pick(int n, int* item, int* bucket, int m, int topick) {
	int i, j, lastIndex, num;

	if (topick == 0) {
		int* newA = (int*)malloc(sizeof(int) * m);

		for (i = 0; i < m; i++) 
			newA[i] = item[bucket[i]];

		for (i = 0; i < m; i++)
			printf("%d ", newA[i]);
		printf("\n");

	
		free(newA);
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

		if (lastIndex >= 0) {
			num = item[bucket[lastIndex]];
			if (num % 2 == 0) {
				if (item[i] != num / 2)
					continue;
			}
			else
				if (item[i] != (num * 3 + 1))
					continue;
		}

		bucket[lastIndex + 1] = i;
		pick(n, item, bucket, m, topick - 1);
	}

	return;

}

int main(void) {
	int N;
	int a[1000];

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &a[i]);

	int* bucket = (int*)malloc(sizeof(int) * N);
	pick(N, a, bucket, N, N);

	free(bucket);
}