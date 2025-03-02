#include <stdio.h>
void pick(int n, int bucket[], int m, int topick);

int main(void)
{
	int n = 5;
	int bucket[3];

	pick(n, bucket, 3, 3);
}

void pick(int n, int bucket[], int m, int topick)
{
	int i, lastIndex;

	if (topick == 0) {
		for (i = 0; i < m; i++)
			printf("%d ", bucket[i]);
		printf("\n");
		return;
	}

	lastIndex = m - topick - 1;

	for (i = 0; i < n; i++) {
		bucket[lastIndex + 1] = i;
		pick(n, bucket, m, topick - 1);
	}
}