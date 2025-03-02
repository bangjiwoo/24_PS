// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, k, i;
	int array[100000];
	scanf("%d", &n);
	scanf("%d", &k);

	int data;
	for (i = 0; i < n; i++) {
		scanf("%d", &data);
		array[i] = data;
	}

	int count = 0;
	for (i = 0; i < n; i++) {
		data = array[i];
		while (data > 0) {
			if (data % 10 == k)
				count++;
			data /= 10;
		}
	}

	printf("%d", count);

}
