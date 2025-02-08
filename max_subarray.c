// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int right_max_sum(int A[], int left, int right)
{
	int i, max = -999, sum = 0;
	for (i = left; i <= right; i++) {
		sum += A[i];
		if (sum > max)
			max = sum;
	}

	return max;
}


int left_max_sum(int A[], int left, int right)
{
	int i, max = -999, sum = 0;
	for (i = right; i >= left; i--) {
		sum += A[i];
		if (sum > max)
			max = sum;
	}

	return max;
}

int max_subarray(int A[], int left, int right)
{
	int v1, v2, v3, max;
	int mid = (left + right) / 2;

	if (left == right)
		return A[left];

	v1 = max_subarray(A, left, mid);
	v2 = max_subarray(A, mid + 1, right);
	v3 = left_max_sum(A, left, mid) + right_max_sum(A, mid + 1, right);

	if (v1 > v2 && v1 > v3)
		max = v1;
	else if (v2 > v1 && v2 > v3)
		max = v2;
	else
		max = v3;
		
	return max;
}

int main(void)
{
	int A[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };

	int lastIndex = sizeof(A) / sizeof(int) - 1;
	int max = max_subarray(A, 0, lastIndex);
	printf("max value = %d\n", max);
}