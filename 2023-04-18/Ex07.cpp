#include <stdio.h>

int main() {
	int i = 1, end;
	printf("수를 입력하세요 : ");
	scanf_s("%d", &end);
	
	while (i <= end) {
		printf("%d", i); i++;
	}
	return 0;


}