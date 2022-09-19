#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int n1, n2;
	int c = 3;
	int t;

	printf("2개의 정숫값을 입력하세요\n");
	printf("정수 1: ");
	scanf("%d", &n1);
	printf("정수 2: ");
	scanf("%d", &n2);

	t = ((n1 + n2) * 2 * c);

	printf("%d", t);

}