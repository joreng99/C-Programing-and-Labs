#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int n1, n2, n3, n4;
	int result;

	printf("ù ��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &n1);
	printf("�� ��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &n2);
	printf("�� ��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &n3);
	printf("�� ��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &n4);

	result = n1 + n2 - n3 * n4;

	printf("%d + %d - %d * %d = %d", n1, n2, n3, n4, result);


}