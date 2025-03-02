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

int partition(student A[], int p, int r)
{
	int i = p - 1;
	int j = p;
	student temp;

	for (j = p; j < r; j++) {
		if (A[j].korean > A[r].korean) {
			i++;
			temp = A[j];
			A[j] = A[i];
			A[i] = temp;
		}
	}

	i++;
	temp = A[i];
	A[i] = A[r];
	A[r] = temp;
	return i;

}

void quickSort(student A[], int p, int r)
{
	if (p < r) {
		int q = partition(A, p, r);
		quickSort(A, p, q - 1);
		quickSort(A, q + 1, r);
	}
}

int main()
{
	int n, i;
	scanf("%d", &n);

	student* s = (student*)malloc(sizeof(student) * n);

	srand(time(NULL));
	for (i = 0; i < n; i++) {
		s[i].id = (i + 1);
		s[i].korean = rand() % 101;
		s[i].english = rand() % 101;
		s[i].math = rand() % 101;
	}

	for (i = 0; i < n; i++)
		printf("학번 : %d\t영어 : %d\t수학 : %d\t국어 : %d\n", s[i].id, s[i].english, s[i].math, s[i].korean);
	
	quickSort(s, 0, n - 1);
	printf("\n");
	for (i = 0; i < n; i++)
		printf("학번 : %d\t영어 : %d\t수학 : %d\t국어 : %d\n", s[i].id, s[i].english, s[i].math, s[i].korean);
	//n 입력 받음
	//구조체 배열을 동적으로 할당
	// 학번 부여
	// random으로 성적 저장
	// 학생 정보(학번, 성적들) 출력
	//국어 성적 기준으로 내림차순 정렬 → quick sort 함수 호출
	// 정렬된 학생 정보(학번, 성적들) 출력
	//동적으로 할당 받은 구조체 배열 반환
}