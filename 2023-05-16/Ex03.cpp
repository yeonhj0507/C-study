#include <stdio.h>

int main() {
	int i, answer;
	scanf_s("%d", &answer);
	for (i = 2; i < answer; i++) {
		if (answer % i == 0) { break; }
	}
	if (answer == i) printf("�Ҽ��Դϴ�.");
	else printf("�Ҽ��� �ƴմϴ�.");

	return 0;
}