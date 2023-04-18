#include <stdio.h>

int main() {
	int c;
	do {
		c = getchar();
		printf("입력한 소문자 %c는 대문자 %c입니다.\n", c, c - 32);
	} while (c != 'q');
	return 0;
}