// Review_8 ��ǻ���а� 20230799 ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isPrime(int n);

int main(void)
{
	int n, i;
	int prime = 1;
	scanf("%d", &n);

	for (i = 2; i < n; i++)
		if (n % i == 0) {
			prime = 0;
			break;
		}
	
	//prime = isPrime(n);
	if (prime == 1)
		printf("�Ҽ���.");
	else
		printf("�Ҽ� �ƴϴ�.");
}

int isPrime(int n)
{
	int i;
	for (i = 2; i < n; i++)
		if (n % i == 0)
			return 0;
	return 1;
}