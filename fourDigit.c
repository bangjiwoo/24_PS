// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void pick(int n, int bucket[], int m, int topick)
{
	int i, lastIndex;
	
	if (topick == 0) {
		for (i = 0; i < m; i++)
			printf("%d", bucket[i]);
		printf("\n");
		return;
	}

	lastIndex = m - topick - 1;

	for (i = 0; i < n; i++) {
		bucket[lastIndex + 1] = i;
		pick(n, bucket, m, topick - 1);
	}

}

int main(void)
{
	int n = 4;
	int m;
	int* bucket;

	scanf("%d", &m);

	bucket = (int*)malloc(sizeof(int) * m);
	pick(n, bucket, m, m);
	free(bucket);
	return 0;

}