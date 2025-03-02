// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int numlen(int n)
{
	int i;
	for (i = 0; n > 0; i++) {
		n /= 10;
	}
	return i;
}

int ThreeMultiple(int turn) 
{
	int rslt, flagN;
	int n = 3;

	int count = 0;

	while (count < turn) {
		int len = numlen(n);
	
		int ten = 1;
		for (int i = 1; i < len; i++)
			ten *= 10;

		flagN = n;
		for (int i = 0; i < len; i++) {
			rslt = flagN / ten;
			count++;

			if (count == turn)
				return rslt;
			else {
				flagN -= ten * rslt;
				ten /= 10;
			}
		}
		n += 3;


	}

}

int main(void)
{
	int turn;
	scanf("%d", &turn);

	int rslt = ThreeMultiple(turn);
	printf("%d", rslt);
	
}