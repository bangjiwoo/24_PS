// ��ǻ���а� 20230799 ������
<<<<<<< HEAD
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <stdlib.h> 

int isSequence(int a[], int size) {
	int i, num;
=======
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int isSequence(int a[], int size)
{
	int i, num;

>>>>>>> 56a51aa7fa7abeb8be3ab95da380b3b9b5bdd68e
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
<<<<<<< HEAD

=======
		
>>>>>>> 56a51aa7fa7abeb8be3ab95da380b3b9b5bdd68e
	}

	return 1;
}

<<<<<<< HEAD
int main(void) { //  ��������  ����   
=======
int main(void)
{
>>>>>>> 56a51aa7fa7abeb8be3ab95da380b3b9b5bdd68e
	int N;
	int a[1000];

	scanf("%d", &N);
<<<<<<< HEAD
	for (int z = 0; z < 4; z++) { // 4��  �ݺ� 
		for (int i = 0; i < N; i++)
			scanf("%d", &a[i]);
		printf("%d ", isSequence(a, N));//����ϴ�  ����  �ڿ�  ������  �ϳ�  ���� 
	}
	printf("\n");
=======
	for (int z = 0; z < 4; z++) {
		for (int i = 0; i < N; i++)
			scanf("%d", &a[i]);
		printf("%d ", isSequence(a, N));
	}
	printf("\n");

>>>>>>> 56a51aa7fa7abeb8be3ab95da380b3b9b5bdd68e
}