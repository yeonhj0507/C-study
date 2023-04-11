#include <stdio.h>

int main() {
	int i = 13, j = 5;
	printf("%d %d %d %d %d %d", i<j, i>j, i <= j, i >= j, i != j, i == j);

	return 0;
}