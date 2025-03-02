// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int flag = -1;
void pick(int A[], int B[], int n, int bucket[], int m, int topick);
int isArimathicProgression(int array[], int len);

int main(void)
{
	int Na, Nb, i;
	scanf("%d", &Na);
	int* A = (int*)malloc(sizeof(int) * Na);
	for (i = 0; i < Na; i++)
		scanf("%d", &A[i]);

	scanf("%d", &Nb);
	int* B = (int*)malloc(sizeof(int) * Nb);
	for (i = 0; i < Nb; i++)
		scanf("%d", &B[i]);

	int* bucket = (int*)malloc(sizeof(int) * Na);

	pick(A, B, Nb, bucket, Na, Na);

	printf("%d", flag);
}

void pick(int A[], int B[], int n, int bucket[], int m, int topick)
{
	int i, j, lastIndex;
	if (topick == 0) {
		int* flagB = (int*)malloc(sizeof(int) * n);
		for (i = 0; i < n; i++)
			flagB[i] = B[i];

		for (i = 0; i < m; i++) 
			flagB[bucket[i]] = A[i];
		if (isArimathicProgression(flagB, n) != -1)
			flag = isArimathicProgression(flagB, n);
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
		pick(A, B, n, bucket, m, topick - 1);
	}

}

int isArimathicProgression(int array[], int len)
{
	int i, sum = 0;

	for (i = 0; i < len - 2; i++) 
		if ((array[i + 1] - array[i]) != (array[i + 2] - array[i + 1]))
			return -1;
	for (i = 0; i < len; i++)
		sum += array[i];
	
	return sum;

}