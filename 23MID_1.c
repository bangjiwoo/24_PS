// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isArimathicProgression(int len, int array[]);

int main(void)
{
	int len;
	int array[100];

	scanf("%d", &len);
	int i, n;
	for (i = 0; i < len; i++) {
		scanf("%d", &n);
		array[i] = n;
	}

	printf("%d", isArimathicProgression(len, array));
	
		
}

int isArimathicProgression(int len, int array[])
{
	int i;
	for (i = 0; i < len - 2; i++) {
		if ((array[i + 1] - array[i]) != (array[i + 2] - array[i + 1]))
			return 0;
	}
	return 1;
}