// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	int ones = howManyOnes(n, 1, 1);
	if (ones < 0)
		printf("Overflow");
	else
		printf("%d", ones);

}

int	howManyOnes(int n, int ones, int count)
{
	if (ones % n == 0) {
		return count;
	}
	else {
		ones *= 10;
		ones += 1;
		count++;
		howManyOnes(n, ones, count);
	}
	
}