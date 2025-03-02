// 컴퓨터학과 20230799 방지우
#include <stdio.h>

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

int main(void)
{
	int A [] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
	//int rslt = left_max_sum(A, 4, 6);
	int rslt = left_max_sum(A, 4, 7);
	printf("%d", rslt);
}