#include<stdio.h>

int main() {
	int a, b, c;
	printf("3개의 값을 입력하세요: ");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("입력한 3개의 값의 합은 %d입니다.", a + b + c);
	return 0;
}