// 022_gugudan.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
	int n;

	printf("단 입력:");
	scanf_s("%d", &n);

	for (int i = 1; i <= 9; i++) {
		printf("%d X %d = %d\n", n, i, i*n);
	} 
	return 0;
}

