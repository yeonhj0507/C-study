#include<stdio.h>

int main() {
	int key;
	printf("문자를 입력하세요 : ");
	char secret = getchar( );
	printf("키 값을 입력하세요 : ");
	scanf_s("%d", &key);
	printf("암호화된 문자는 %c 입니다.", secret - 32 + key);
	return 0;
}