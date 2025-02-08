// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isPalindrome(int n);
int calculateReverse(int n);


int main(void)
{
	int n, reverseN;
	int total = 0;
	int count = 0;
	scanf("%d", &n);
	while (total>=0) {
		count++;
		reverseN = calculateReverse(n);
		total = n + reverseN;
		if (isPalindrome(total))
			break;
		else
			n = total;
		
	}

	if (total > 0) {
		printf("%d %d", count, total);
	}
	else
		printf("Overflow");



}

int isPalindrome(int n)
{
	int reverseN = calculateReverse(n);
	if (n == reverseN)
		return 1;
	else
		return 0;
}

int calculateReverse(int n)
{
	int reverseN = 0;
	while (n > 0) {
		reverseN *= 10;
		reverseN += n % 10;
		n /= 10;
	}
	return reverseN;
}