// 컴퓨터학과 20230799 방지우
#include <stdio.h>
void pick(int n, int picked[], int m, int topick);

int main(void)
{
	int picked[4];
	pick(7, picked, 4, 4);


}

void pick(int n, int picked[], int m, int topick)
{
	int smallest, lastIndex, i;
	if (topick == 0) {
		for (i = 0; i < m; i++) 
			printf("%d ", picked[i]);
		printf("\n");
		return;
	}
	lastIndex = m - topick - 1;
	if (m == topick) 
		smallest = 0;
	
	else
		smallest = picked[lastIndex] + 1;

	for (i = smallest; i < n; i++) {
		picked[lastIndex + 1] = i;
		pick(n, picked, m, topick - 1);

	}
	
}