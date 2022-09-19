#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int n1, n2, n3, n4;
	int result;

	printf("첫 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &n1);
	printf("두 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &n2);
	printf("세 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &n3);
	printf("네 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &n4);

	result = n1 + n2 - n3 * n4;

	printf("%d + %d - %d * %d = %d", n1, n2, n3, n4, result);


}