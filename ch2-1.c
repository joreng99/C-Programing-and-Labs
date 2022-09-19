#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void main() {

	int a, b;
	int result;

	printf("##두 수를 나누기##\n");
	printf("첫번째 값 : ");
	scanf("%d", &a);
	printf("두번째 값 : ");
	scanf("%d", &b);

	if(b == 0) {
		
		printf("다시 입력하세요. 두번째 값 : ");
		scanf("%d", &b);

		if(b == 0) {
			printf("다시 입력하세요. 두번째 값 : ");
			scanf("%d", &b);

			if (b == 0) {
				printf("0을 세 번 입력했습니다. 종료합니다.");
			} 
			else {
				result = a / b;
				printf("%d / %d = %d\n", a, b, result);
			}

		} 
		else {
			result = a / b;
			printf("%d / %d = %d\n", a, b, result);
		}


	} 
	else {
		result = a / b;
		printf("%d / %d = %d", a, b, result);
	}



}