#include <stdio.h>

int main() {
	int score;
	char grade;

	puts("������ �Է��ϼ���(1~100)");
	putchar('>');
	scanf_s("%d", &score);
	switch (score / 10) {
		case 10:
		case 9: grade = 'A'; break;
		case 8: grade = 'B'; break;
		case 7: grade = 'C'; break;
		case 6: grade = 'D'; break;
		default: grade = 'F';
	}
	printf("������ %c�Դϴ�.", grade);
	return 0;
}