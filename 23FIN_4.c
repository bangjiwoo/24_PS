// 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int partition(char A[], int p, int r)
{
	int i = p - 1;
	int j = p;
	char temp;

	char pivot = A[r];

	int flag = 0;
	if (pivot >= '0' && pivot <= '9')
		flag = 1; // pivot이 숫자일때 -> 무조건 알파벳보다 큼 숫자끼리는 비교

	switch (flag) {
	case 1: // pivot이 숫자일때
		for (j = p; j < r; j++) {
			if (A[j] >= '0' && A[j] <= '9') { // 둘다 숫자일때 비교
				if (A[j] < A[r]) {
					i++;
					temp = A[j];
					A[j] = A[i];
					A[i] = temp;
				}
			}else {
				i++;
				temp = A[j];
				A[j] = A[i];
				A[i] = temp;
			}

		}break;
	case 0: // pivot이 문자일때 -> 숫자면 작음 문자끼리 비교
		for (j = p; j < r; j++) {
			if (!(A[j] >= '0' && A[j] <= '9')) { // 숫자 아닐때(문자일때) 비교
				if (A[j] < A[r]) {
					i++;
					temp = A[j];
					A[j] = A[i];
					A[i] = temp;
				}
			}
		}break;
	}

	i++;
	temp = A[i];
	A[i] = A[r];
	A[r] = temp;

	return i;

}

void quickSort(char A[], int p, int r)
{
	if (p < r) {
		int q = partition(A, p, r);
		quickSort(A, p, q - 1);
		quickSort(A, q + 1, r);
	}
}

int main(void)
{
	char array[500000];

	scanf("%s", array);

	int len = strlen(array);

	quickSort(array, 0, len - 1);
	
	printf("%s", array);
}