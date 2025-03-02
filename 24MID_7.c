#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int count = 0;

void pick(int n, int item[], int bucket[], int m, int topick)
{
	int i, smallest, lastIndex;

	if (topick == 0) {
		int sum = 0;
		for (i = 0; i < m; i++)
			sum += item[bucket[i]];
		if (sum == 0)
			count++;
		return;
	}

	lastIndex = m - topick - 1;

	if (m == topick)
		smallest = 0;
	else
		smallest = bucket[lastIndex] + 1; // 넣기 시작할 값

	for (i = smallest; i < n; i++) {
		bucket[lastIndex + 1] = i;
		pick(n, item, bucket, m, topick - 1);
	}
}

int main(void)
{
	int N, M, i;
	scanf("%d", &N);
	//scanf("%d", &M);

	int* a = (int*)malloc(sizeof(int) * N);
	
	for (i = 0; i < N; i++)
		scanf("%d", &a[i]);

	for (i = 1; i <= N; i++) {
		int* bucket = (int*)malloc(sizeof(int) * i);
		pick(N, a, bucket, i, i);
	}
	//pick(N, a, bucket, M, M);
	printf("%d", count);


}