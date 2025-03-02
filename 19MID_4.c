// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int count = 0;
void pick(char item[], int n, int bucket[], int m, int topick, int key);

int main(void)
{
	int n, i;
	scanf("%d", &n);
	int* bucket = (int*)malloc(sizeof(int) * n);

	char item[] = { '+', '-' };

	for (i = 1; i <= n; i++)
		pick(item, 2, bucket, i, i, n);

	printf("%d", count);
	
	return 0;

}

void pick(char item[], int n, int bucket[], int m, int topick, int key)
{
	int i, lastIndex;

	if (topick == 0) {
		int sum = 0;
		for (i = 0; i < m; i++) {
			if (item[bucket[i]] == '+')
				sum += i + 1;
			else
				sum -= i + 1;
		}

		if (sum == key)
			count++;

		return;
	}

	lastIndex = m - topick - 1;

	for (i = 0; i < n; i++) {
		bucket[lastIndex + 1] = i;
		pick(item, n, bucket, m, topick - 1, key);
	}
}