#include <stdio.h>

int main() {
	int start, end, tempStart, sum = 0;

	printf("�� ���� �Է��ϼ���: ");
	scanf_s("%d %d", &start, &end);
	tempStart = start;

	for (;start < end + 1;start++) {
		sum += start;
	}
	printf("%d���� %d������ ���� %d�Դϴ�.", tempStart, end, sum);
	return 0;
}