// Review_6 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, score;
	int max = -99;
	int i = 0;
	scanf("%d", &n);

	while (i < n) {
		scanf("%d", &score);

		if (score > max)
			max = score;
		
		i++;
	}
	
	printf("%d", max);

}