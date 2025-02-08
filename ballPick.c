// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pick(char item[], int n, int bucket[], int m, int topick)
{
	int i, lastIndex, smallest;

	if (topick == 0) {
		for (i = 0; i < m; i++)
			printf("%c ", item[bucket[i]]);
		printf("\n");
		return;
	}

	lastIndex = m - topick - 1;

	if (m == topick)
		smallest = 0;
	else
		smallest = bucket[lastIndex] + 1;

	for (i = smallest; i < n; i++) {
		bucket[lastIndex + 1] = i;
		pick(item, 7, bucket, m, topick - 1);
	}




}

int main(void)
{
	char item[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G' };
	int bucket[3];

	pick(item, 7, bucket, 3, 3);

}