// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int count = 0;
void invest(char item[], int n, int bucket[], int m, int topick, int person[]);

int main(void)
{
	int n, i;
	scanf("%d", &n);
	int* person = (int*)malloc(sizeof(int) * n);
	int* bucket = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++)
		scanf("%d", &person[i]);

	char item[] = { '+', '-', '=' };

	invest(item, 3, bucket, n, n, person);

	printf("%d", count);

}

void invest(char item[], int n, int bucket[], int m, int topick, int person[])
{
	int i, lastIndex;

	if (topick == 0) {
		int sum = 0;
		for (i = 0; i < m; i++) {
			if (item[bucket[i]] == '+')
				sum += person[i];
			else if (item[bucket[i]] == '-')
				sum -= person[i];
			//printf("%c%d", item[bucket[i]], person[i]);


		}
		//printf("=%d\n", sum);

		if (sum == 0)
			count++;

		return;
	}

	lastIndex = m - topick - 1;

	for (i = 0; i < n; i++) {
		bucket[lastIndex + 1] = i;
		invest(item, n, bucket, m, topick - 1, person);
	}
	
}