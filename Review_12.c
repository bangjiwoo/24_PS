// Review_12 ��ǻ���а� 20230799 ������
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 12
#include <stdio.h>
int search(int a[], int sizeA, int key);

int main(void)
{
	int a[SIZE] = { 11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66 };

	int i, key;
	scanf("%d", &key);

	int found = 0;
	/*for (i = 0; i < SIZE; i++)
		if (a[i] == key) {
			found = 1;
			break;
		}
	

	if (found == 0)
		printf("����.");
	else
		printf("%d��°�� �ִ�.", i + 1);*/
	
	int result = search(a, SIZE, key);
	if (result < 0)
		printf("����.");
	else
		printf("%d��°�� �ִ�.", result + 1);

}

int search(int a[], int sizeA, int key)
{
	int i;
	for (i = 0; i < sizeA; i++)
		if (a[i] == key) 
			return i;
		
	return -1;
	
}