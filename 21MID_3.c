// ��ǻ���а� 20230799 ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int solution(int cols, int rows, char** array , int start)
{
	int i = 0, rslt = start;
	while (i < rows) {
		if (rslt - 1 >= 0 && array[i][rslt - 1] == '1') //���� �˻�
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
	char** array = (char**)malloc(sizeof(char*) * rows); // �����Ҵ� �ȹް� 


	for (i = 0; i < rows; i++)
		array[i] = (char*)malloc(sizeof(char) * cols);

	for (int i = 0; i < rows; i++)
			scanf("%s", array[i]);

	printf("%d", solution(cols, rows, array, start));

	

}