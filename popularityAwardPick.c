// ��ǻ���а� 20230799 ������
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
	printf("�α�� ���? ");
	scanf("%d", &n);
	char actor[5][30] = { "����", "�����", "���߱�", "����", "����" };
	int* bucket = (int*)malloc(sizeof(int) * n);
	pick(actor, 5, bucket, n, n);


}