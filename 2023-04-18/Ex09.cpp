#include <stdio.h>

int main() {
	int c;
	do {
		c = getchar();
		printf("�Է��� �ҹ��� %c�� �빮�� %c�Դϴ�.\n", c, c - 32);
	} while (c != 'q');
	return 0;
}