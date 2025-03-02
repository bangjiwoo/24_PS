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
		printf("�й� : %d\t���� : %d\t���� : %d\t���� : %d\n", s[i].id, s[i].english, s[i].math, s[i].korean);
	
	quickSort(s, 0, n - 1);
	printf("\n");
	for (i = 0; i < n; i++)
		printf("�й� : %d\t���� : %d\t���� : %d\t���� : %d\n", s[i].id, s[i].english, s[i].math, s[i].korean);
	//n �Է� ����
	//����ü �迭�� �������� �Ҵ�
	// �й� �ο�
	// random���� ���� ����
	// �л� ����(�й�, ������) ���
	//���� ���� �������� �������� ���� �� quick sort �Լ� ȣ��
	// ���ĵ� �л� ����(�й�, ������) ���
	//�������� �Ҵ� ���� ����ü �迭 ��ȯ
}