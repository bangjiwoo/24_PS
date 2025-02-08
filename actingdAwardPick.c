// ��ǻ���а� 20230799 ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void pick(char actor[5][30], int n, int bucket[], int m, int topick)
{
	int i, j, lastIndex;

	if (topick == 0) {
		for (i = 0; i < m; i++)
			printf("\t%s", actor[bucket[i]]);
		printf("\n");
		return;
	}

	lastIndex = m - topick - 1;

	for (i = 0; i < n; i++) {
		for (j = 0; j <= lastIndex; j++)
			if (bucket[j] == i)
				break;
		if (bucket[j] == i)
			continue;
		bucket[lastIndex + 1] = i;
		pick(actor, 5, bucket, m, topick - 1);
		
	}

}


int main(void)
{
	int n, i;
	printf("���� ������?: ");
	scanf("%d", &n);
	int* bucket = (int*)malloc(sizeof(int) * n);
	char actor[5][30] = { "����", "�����", "���߱�", "����", "����" };

	for (i = 0; i < n; i++) {
		printf("\t�� %d", (i + 1));
	}
	printf("\n");

	pick(actor, 5, bucket, n, n);

}