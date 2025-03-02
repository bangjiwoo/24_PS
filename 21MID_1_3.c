// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int reverse(char num[], char rNum[])
{
	int i;
	int len = strlen(num);
	char num_reverse[101];
	for (i = 0; i < len; i++)
		rNum[i] = num[len - 1 - i];
	rNum[i] = '\0';
	return len;
}


int main(void)
{
	int num1[100], num2[100];
	char rNum1[101], rNum2[101];
	int num1count = 0, num2count = 0, i = 0, j = 0;
	char num;

	while ((num = getchar()) != '\n')
		num1[num1count++] = num - '0';

	while ((num = getchar()) != '\n')
		num2[num2count++] = num - '0';

	int num1len = reverse(num1, rNum1);
	int num2len = reverse(num2, rNum2);

	int count;
	if (num1len > num2len)
		count = num1len;
	else
		count = num2len;

	int i, carry = 0, carryCount = 0;

	int total = 0;
	for (i = 0; i < count; i++) {
		if (rNum1[i] >= 48 && rNum2[i] >= 48)
			total = (rNum1[i] - '0') + (rNum2[i] - '0') + carry;

		else if (rNum1[i] >= 48 && rNum2[i] < 48)
			total = (rNum1[i] - '0') + carry;

		else if (rNum1[i] < 48 && rNum2[i] >= 48)
			total = (rNum2[i] - '0') + carry;

		if (total >= 10) {
			carry = 1;
			carryCount++;
		}
		else
			carry = 0;
	}
	printf("%d", carryCount);
}