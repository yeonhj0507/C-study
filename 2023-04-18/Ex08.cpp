#include <stdio.h>

int main() {
	int answer;
	do {
		scanf_s("%d", &answer);
		printf("%d ют╥б\n", answer);
	} while (answer != 0);
	return 0;

}