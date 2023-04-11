#include <stdio.h>

int main() {
	int i = 13, j = 5;
	if (i < 10 && ++j>3) {}
	printf("%d %d\n", i, j);
	return 0;
}