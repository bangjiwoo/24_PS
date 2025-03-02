// 컴퓨터학과 20230799 방지우
#include <stdio.h>

int main(void)
{
	printf("\n%d", get_cycle_number(22));
}

int get_cycle_number(int n)
{
	if (n == 1) {
		printf("%d ", n);
		return 1;
	}
	else if (n % 2 == 0) {
		printf("%d ", n);
		return get_cycle_number(n / 2) + 1;
	}
	else {
		printf("%d ", n);
		return get_cycle_number(n * 3 + 1) + 1;
	}
}