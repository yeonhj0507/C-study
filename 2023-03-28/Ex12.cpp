#include<stdio.h>

int main() {
	int key;
	printf("���ڸ� �Է��ϼ��� : ");
	char secret = getchar( );
	printf("Ű ���� �Է��ϼ��� : ");
	scanf_s("%d", &key);
	printf("��ȣȭ�� ���ڴ� %c �Դϴ�.", secret - 32 + key);
	return 0;
}