#include <stdio.h>

int main() {
	int i = 1, end;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &end);
	
	while (i <= end) {
		printf("%d", i); i++;
	}
	return 0;


}