#include <stdio.h>

int main() {
	int answer;

	while (1) {
		scanf_s("%d", &answer);
		if (answer == 0) {
			break;
		}
		else {
			printf("%d �Է�\n", answer);
		}
	}

	return 0;
}