#include<stdio.h>

int main() {
	int a;
	printf("1���� ���� �Է��ϼ��� : ");
	scanf_s("%d", &a);
	printf("%d�� 8���� %o�Դϴ�.\n", a, a);
	printf("%d�� 16���� %x�Դϴ�.\n", a, a);
	printf("%d�� �ƽ�Ű�ڵ� %c�Դϴ�.\n", a, a);
	return 0;
}