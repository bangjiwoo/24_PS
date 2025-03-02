// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void pick(int money[], int n, int bucket[], int m, int topick, int target_money)
{
	int i, lastIndex, smallest;

	if (topick == 0) {
		int sum = 0;
		for (i = 0; i < m; i++) 
			sum += money[bucket[i]];

		if (sum == target_money) {
			for (i = 0; i < m; i++) 
				if (money[bucket[i]] != 0)
					printf("%d ", money[bucket[i]]);
			printf("\n");
		}
		return;
	}

	lastIndex = m - topick - 1;

	if (m == topick)
		smallest = 0;
	else
		smallest = bucket[lastIndex];

	for (i = smallest; i < n; i++) {
		bucket[lastIndex + 1] = i;
		pick(money, n, bucket, m, topick - 1, target_money);
	}

}

int main(void)
{
	int n, target_money;
	scanf("%d", &target_money);
	n = target_money / 1000;

	int* bucket = (int*)malloc(sizeof(int)*n);
	int money[] = { 1000, 5000, 10000, 0 };

	pick(money, 4, bucket, n, n, target_money);
	free(bucket);
}