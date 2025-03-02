// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void pick(char actor[][30], int n, int bucket[], int m, int topick)
{
	int i, lastIndex, smallest;

	if (topick == 0) {
		for (i = 0; i < m; i++)
			printf("%10s", actor[bucket[i]]);
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
		pick(actor, 5, bucket, m, topick - 1);
	}



}


int main(void)
{
	int n;
	printf("인기상 몇명? ");
	scanf("%d", &n);
	char actor[5][30] = { "공유", "김수현", "송중기", "지성", "현빈" };
	int* bucket = (int*)malloc(sizeof(int) * n);
	pick(actor, 5, bucket, n, n);


}