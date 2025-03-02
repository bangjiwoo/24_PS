// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int howManyCarry(int num1, int num2);

int main(void)
{
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	printf("%d", howManyCarry(n1, n2));

}

int howManyCarry(int num1, int num2)
{
	int carry = 0;
	int carryCount = 0;
	int num1_reminder, num2_reminder;
	while (num1 > 0 || num2 > 0) {
		num1_reminder = num1 % 10;
		num2_reminder = num2 % 10;

		if (num1_reminder + num2_reminder + carry >= 10) {
			carry = 1;
			carryCount++;
		}
		else
			carry = 0;

		num1 /= 10;
		num2 /= 10;

	}

	return carryCount;

}