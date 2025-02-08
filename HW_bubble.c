// ��ǻ���а� 20230799 ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Student
{
	int id; //�й�. 1�� ���� �ο� ..
	int korean, english, math;
}student;

void bubbleSortDescendingByKorean(student s[], int n)
{
	int i, j;
	student temp;

	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (s[j].korean < s[j + 1].korean) {
				temp = s[j + 1];
				s[j + 1] = s[j];
				s[j] = temp;
			}

		}

	}
}

void bubbleSortAscendingById(student s[], int n)
{
	int i, j;
	student temp;

	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (s[j].id > s[j + 1].id) {
				temp = s[j + 1];
				s[j + 1] = s[j];
				s[j] = temp;
			}

		}

	}
}

int main()
{
	int n, i;
	printf("�л� ���� �Է��ϼ���: ");
	scanf("%d", &n);

	student* list = (student*)malloc(sizeof(student) * n);

	srand(time(NULL));
	for (i = 0; i < n; i++) {
		list[i].id = (i + 1);
		list[i].korean = rand() % 101;
		list[i].english = rand() % 101;
		list[i].math = rand() % 101;

	}

	bubbleSortDescendingByKorean(list, n);
	for (i = 0; i < n; i++)
		printf("�й� : %d\t���� : %d\t���� : %d\t���� : %d\n", list[i].id, list[i].english, list[i].math, list[i].korean);

	printf("\n");
	bubbleSortAscendingById(list, n);
	for (i = 0; i < n; i++)
		printf("�й� : %d\t���� : %d\t���� : %d\t���� : %d\n", list[i].id, list[i].english, list[i].math, list[i].korean);

	free(list);
	
}