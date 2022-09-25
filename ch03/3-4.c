#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(){

	float height, avgWeight;

	printf("키를 입력하세요: ");
	scanf("%f", &height);

	printf("표준체중은 %.1f입니다.", (height - 100) * 0.9);
}