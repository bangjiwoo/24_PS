// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Student
{
	int id; //학번. 1번 부터 부여 ..
	int korean, english, math;
}student;

int partition(student* list, int p, int r, int* A, int choice)
{
	int i = p - 1;
	int j = p;
	student temp;

	if (choice != 4) {
		for (j = p; j < r; j++) {
			if (A[j] > A[r]) {
				i++;
				temp = list[j];
				list[j] = list[i];
				list[i] = temp;
			}
		}
	}
	else {
		for (j = p; j < r; j++) {
			if (A[j] < A[r]) {
				i++;
				temp = list[j];
				list[j] = list[i];
				list[i] = temp;
			}
		}
	}
	i++;
	temp = list[i];
	list[i] = list[r];
	list[r] = temp;

	return i;

}

void quickSort(student* list, int p, int r, int* A, int choice)
{
	if (p < r) {
		int q = partition(list, p, r, A, choice);
		quickSort(list, p, q - 1, A, choice);
		quickSort(list, q + 1, r, A, choice);
	}
}

void makeA(student* list, int* A, int n, int choice) {
	int i;
	switch (choice) {
	case 1:
		for (i = 0; i < n; i++)
			A[i] = list[i].korean;
		break;
	case 2:
		for (i = 0; i < n; i++)
			A[i] = list[i].math;
		break;
	case 3:
		for (i = 0; i < n; i++)
			A[i] = list[i].english;
		break;
	case 4:
		for (i = 0; i < n; i++)
			A[i] = list[i].id;
		break;

	}

}

int main(void)
{
	int n, i;
	printf("학생 수를 입력하세요: ");
	scanf("%d", &n);

	student* list = (student*)malloc(sizeof(student) * n);
	int* A = (int*)malloc(sizeof(int) * n);

	srand(time(NULL));
	for (i = 0; i < n; i++) {
		list[i].id = (i + 1);
		list[i].korean = rand() % 101;
		list[i].english = rand() % 101;
		list[i].math = rand() % 101;

	}
	for (i = 0; i < n; i++)
		printf("학번 : %d\t영어 : %d\t수학 : %d\t국어 : %d\n", list[i].id, list[i].english, list[i].math, list[i].korean);

	int choice;
	do {
		printf("\n정렬 기준 선택(1:국어, 2:수학, 3:영어, 4:id(오름차순), 0:끝내기) : ");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			makeA(list, A, n, choice);
			quickSort(list, 0, n - 1, A, choice);
			for (i = 0; i < n; i++)
				printf("학번 : %d\t영어 : %d\t수학 : %d\t국어 : %d\n", list[i].id, list[i].english, list[i].math, list[i].korean);
			break;
		case 2:
			makeA(list, A, n, choice);
			quickSort(list, 0, n - 1, A, choice);
			for (i = 0; i < n; i++)
				printf("학번 : %d\t영어 : %d\t수학 : %d\t국어 : %d\n", list[i].id, list[i].english, list[i].math, list[i].korean);
			break;
		case 3:
			makeA(list, A, n, choice);
			quickSort(list, 0, n - 1, A, choice);
			for (i = 0; i < n; i++)
				printf("학번 : %d\t영어 : %d\t수학 : %d\t국어 : %d\n", list[i].id, list[i].english, list[i].math, list[i].korean);
			break;
		case 4:
			makeA(list, A, n, choice);
			quickSort(list, 0, n - 1, A, choice);
			for (i = 0; i < n; i++)
				printf("학번 : %d\t영어 : %d\t수학 : %d\t국어 : %d\n", list[i].id, list[i].english, list[i].math, list[i].korean);
			break;

		}

	} while (choice != 0);

	free(list);
	free(A);
}