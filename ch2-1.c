#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void main() {

	int a, b;
	int result;

	printf("##�� ���� ������##\n");
	printf("ù��° �� : ");
	scanf("%d", &a);
	printf("�ι�° �� : ");
	scanf("%d", &b);

	if(b == 0) {
		
		printf("�ٽ� �Է��ϼ���. �ι�° �� : ");
		scanf("%d", &b);

		if(b == 0) {
			printf("�ٽ� �Է��ϼ���. �ι�° �� : ");
			scanf("%d", &b);

			if (b == 0) {
				printf("0�� �� �� �Է��߽��ϴ�. �����մϴ�.");
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