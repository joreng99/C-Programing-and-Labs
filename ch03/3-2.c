#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	double a, b;


	printf("2���� �Ǽ��� �Է��ϼ���.\n");
	printf("�Ǽ� a: ");
	scanf("%lf", &a);
	printf("�Ǽ� b: ");
	scanf("%lf", &b);

	printf("a���� b���� %.6lf%%�Դϴ�.",(a/b)*100);
}