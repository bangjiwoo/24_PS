// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1[100], num2[100];
	int num1count = 0, num2count = 0, i = 0, j = 0;
	char num;

	while ((num = getchar()) != '\n') 
		num1[num1count++] = num - '0';
	
	while ((num = getchar()) != '\n')
		num2[num2count++] = num - '0';
	
	int carry = 0, carryCount = 0;
	int total, reminder, len;
	if (num1count > num2count)
		len = num1count;
	else
		len = num2count;
	while (num1count != 0 || num2count != 0) {
		if (num1count == 0) 
			total = num2[--num2count] + carry;
		
		else if (num2count == 0) 
			total = num1[--num1count] + carry;
		
		else
			total = num1[--num1count] + num2[--num2count] + carry;

		if (total >= 10) {
			carry = 1;
			carryCount++;
		}
		else
			carry = 0;
	}
	
	printf("%d", carryCount);

}