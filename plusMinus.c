// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void pick(char item[], int n, int bucket[], int m, int topick)
{
	int i, lastIndex;

	if (topick == 0) {
		int sum = 0;
		for (i = 0; i < m; i++) {
			if (item[bucket[i]] == '+')
				sum += i + 1;
			else
				sum -= i + 1;
			printf("%c%d", item[bucket[i]], (i+1));
		}
		printf("=%d\n", sum);
		return;
	}

	lastIndex = m - topick - 1;

	for (i = 0; i < n; i++) {
		bucket[lastIndex + 1] = i;
		pick(item, n, bucket, m, topick - 1);
	}

}

int main(void)
{
	int n;
	scanf("%d", &n);
	int* bucket = (int*)malloc(sizeof(int) * n);

	char item[2] = { '+', '-' };
	pick(item, 2, bucket, n, n);

}