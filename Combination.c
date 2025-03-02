#include <stdio.h>
#include <stdlib.h>
void pick(int n, int bucket[], int m, int topick);

int main(void)
{
	int n = 8;
	int bucket[4];

	pick(n, bucket, 4, 4);

}

void pick(int n, int bucket[], int m, int topick)
{
	int i, smallest, lastIndex;
	
	if (topick == 0) {
		for (i = 0; i < m; i++) 
			printf("%d ", bucket[i]);
		printf("\n");
		return;
	}

	lastIndex = m - topick - 1;

	if (m == topick)
		smallest = 0;
	else
		smallest = bucket[lastIndex] + 1; // 넣기 시작할 값

	for (i = smallest; i < n; i++) {
		bucket[lastIndex + 1] = i;
		pick(n, bucket, m, topick - 1);
	}
}