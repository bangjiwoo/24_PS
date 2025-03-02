// Review_11 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int list[6] = { 5,3,8,1,2,7 };

	int i, j, temp;
	int minIndx = 0;

	for (i = 0; i < 6; i++) {
		minIndx = i;
		for (j = i; j < 6; j++)
			if (list[j] < list[minIndx])
				minIndx = j;
		temp = list[i];
		list[i] = list[minIndx];
		list[minIndx] = temp;

	}
	for (i = 0; i < 6; i++)
		printf("%d ", list[i]);
}