#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int n1, n2;
	int c = 3;
	int t;

	printf("2���� �������� �Է��ϼ���\n");
	printf("���� 1: ");
	scanf("%d", &n1);
	printf("���� 2: ");
	scanf("%d", &n2);

	t = ((n1 + n2) * 2 * c);

	printf("%d", t);

}