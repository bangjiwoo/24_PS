// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int rslt = 0;

void pick(int n, int bucket[], int m, int topick, int key, int count)
{
	int lastIndex, smallest, i;

	if (topick == 0) {
		if (count >= key) 
			rslt++;
		
		return;
	}

	lastIndex = m - topick - 1;

	if (topick < key - count)
		return;

	/*if (key == count) {
		rslt += n - bucket[lastIndex];
		return;
	}*/
		

	if (topick == m)
		smallest = 1;
	else
		smallest = bucket[lastIndex] + 1;

	for (i = smallest; i <= n; i++) {
		
		bucket[lastIndex + 1] = i;
		if (i % 2 == 0)
			pick(n, bucket, m, topick - 1, key, count + 1);
		else
			pick(n, bucket, m, topick - 1, key, count);
	}


}

int main(void)
{
	int N, M, L;
	scanf("%d %d %d", &N, &M, &L);

	int* bucket = (int*)malloc(sizeof(int) * M);
	pick(N, bucket, M, M, L, 0);

	printf("%d", rslt);
	free(bucket);
}