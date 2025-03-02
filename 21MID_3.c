// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int solution(int cols, int rows, char** array , int start)
{
	int i = 0, rslt = start;
	while (i < rows) {
		if (rslt - 1 >= 0 && array[i][rslt - 1] == '1') //왼쪽 검사
			rslt--;
		else if (rslt < cols && array[i][rslt] == '1')
			rslt++;
		i++;
	}
	return rslt;
}

int main(void)
{
	int cols, rows, start;
	scanf("%d %d", &cols, &rows);
	scanf("%d", &start);

	int i, j;
	char** array = (char**)malloc(sizeof(char*) * rows); // 동적할당 안받고 


	for (i = 0; i < rows; i++)
		array[i] = (char*)malloc(sizeof(char) * cols);

	for (int i = 0; i < rows; i++)
			scanf("%s", array[i]);

	printf("%d", solution(cols, rows, array, start));

	

}