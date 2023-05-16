#include <stdio.h>

int main() {
	int start, end, tempStart, sum = 0;

	printf("두 수를 입력하세요: ");
	scanf_s("%d %d", &start, &end);
	tempStart = start;

	for (;start < end + 1;start++) {
		sum += start;
	}
	printf("%d부터 %d까지의 합은 %d입니다.", tempStart, end, sum);
	return 0;
}