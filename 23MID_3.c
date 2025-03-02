// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int min = 9999999;
int max = -9999999;

int main(void)
{
	int n, k, i;
	scanf("%d", &n);
	scanf("%d", &k);
	
	int* A = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);

	int* B = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)
		scanf("%d", &B[i]);

	int* bucket = (int*)malloc(sizeof(int) * k);

	int totalB = 0, result;
	for (i = 0; i < n; i++)
		totalB += B[i];

	pick(A, B, n, bucket, k, k);

	result = totalB - min + max;
	printf("%d", result);

}

int pick(int A[], int B[], int n, int bucket[], int m, int topick)
{
	int i, lastIndex, smallest;
	if (topick == 0) {
		int sumA = 0, sumB = 0;
		for (i = 0; i < m; i++) {
			sumA += A[bucket[i]];
			sumB += B[bucket[i]];
		}

		if (sumA > max)
			max = sumA;
		if (sumB < min)
			min = sumB;

		return;

	}

	lastIndex = m - topick - 1;

	if (m == topick)
		smallest = 0;
	else
		smallest = bucket[lastIndex] + 1;

	for (i = smallest; i < n; i++) {
		bucket[lastIndex + 1] = i;
		pick(A, B, n, bucket, m, topick - 1);
	}
}