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

void selectionSort(student s[], int n)
{
	int i, j, min_idx, min;
	student tempS;
	for (i = 0; i < n - 1; i++) {
		min_idx = 0;
		min = s[0].korean;
		for (j = 1; j < n - i; j++) {
			if (min > s[j].korean) {
				min = s[j].korean;
				min_idx = j;
			}
		}
		tempS = s[n - i - 1];
		s[n - i - 1] = s[min_idx];
		s[min_idx] = tempS;

	}
}

int main()
{
	int n, i;
	printf("학생 수를 입력하세요: ");
	scanf("%d", &n);

	student* list = (student*)malloc(sizeof(student) * n);

	srand(time(NULL));
	for (i = 0; i < n; i++) {
		list[i].id = (i + 1);
		list[i].korean = rand() % 101;
		list[i].english = rand() % 101;
		list[i].math = rand() % 101;
		
	}

	selectionSort(list, n);
	 
	for (i = 0; i < n; i++) 
		printf("학번 : %d\t영어 : %d\t수학 : %d\t국어 : %d\n", list[i].id, list[i].english, list[i].math, list[i].korean);
	
	free(list);
}