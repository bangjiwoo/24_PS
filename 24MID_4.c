// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <stdlib.h> 

int isSequence(int a[], int size) {
	int i, num;
	for (i = 0; i < size - 1; i++) {
		num = a[i];
		if (num % 2 == 0) {
			if (a[i + 1] != num / 2)
				return 0;
		}
		else {
			if (a[i + 1] != (num * 3 + 1))
				return 0;
		}

	}

	return 1;
}

int main(void) { //  변경하지  말라   
	int N;
	int a[1000];

	scanf("%d", &N);
	for (int z = 0; z < 4; z++) { // 4번  반복 
		for (int i = 0; i < N; i++)
			scanf("%d", &a[i]);
		printf("%d ", isSequence(a, N));//출력하는  숫자  뒤에  공백이  하나  있음 
	}
	printf("\n");
}