// 032_str.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
	char s[10];

	scanf_s("%s", s, sizeof(s));

	for (int i = 0; s[i] != '\0'; i++)
		printf("%c\n", s[i]);
}

