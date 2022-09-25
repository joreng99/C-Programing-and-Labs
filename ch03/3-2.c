#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	double a, b;


	printf("2개의 실수를 입력하세요.\n");
	printf("실수 a: ");
	scanf("%lf", &a);
	printf("실수 b: ");
	scanf("%lf", &b);

	printf("a값은 b값의 %.6lf%%입니다.",(a/b)*100);
}