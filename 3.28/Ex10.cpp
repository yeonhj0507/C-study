#include<stdio.h>

int main() {
	int height, weight;
	printf("키와 몸무게를 입력하세요: ");
	scanf_s("%d %d", &height, &weight);
	printf("키는 %dcm이고 몸무게는 %dkg입니다.", height, weight);
	return 0;
}