#include <stdio.h>

int main() {
	int i, count = 0, answer;

	scanf_s("%d", &answer);
	for (i = 1; i < 101; i++) {
		if (i % answer != 0) {
			continue;
		}
		count++;
	}
	printf("1���� 100���� �� �߿��� %d�� ����� %d���Դϴ�.", answer, count);
	return 0;
}