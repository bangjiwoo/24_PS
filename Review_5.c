// Review_5 ��ǻ���а� 20230799 ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, score;
	int total = 0;
	int i = 0;
	scanf("%d", &n);

	while (i < n) {
		scanf("%d", &score);
		total += score;
		i++;
	}
	int average = total / n;

	printf("total = %d\n", total);
	printf("average = %d", average);

}