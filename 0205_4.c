// 컴퓨터학과 20230799 방지우
#include <stdio.h>
int get_cycle_number(int n);

int main(void)
{
	printf("\n%d", get_cycle_number(22));
}

int get_cycle_number(int n)
{
	int len = 1;
	printf("%d ", n);
	while (n != 1) {
		if (n % 2 == 0)
			n /= 2;
		else
			n = n * 3 + 1;

		printf("%d ", n);
		len++;
	}
	return len;
}