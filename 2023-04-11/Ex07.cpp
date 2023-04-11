#include <stdio.h>

int main() {
	int i = 13, j = 5, temp;

	printf("%d %d\n", i == 13 && j == 5, i == 13 && j == 4);
	printf("%d %d\n", i == 13 || j == 5, i == 12 || j == 4);
	temp = i; printf("%d ", !temp);
	temp = 0; printf("%d", !temp);
		return 0;
}