// 028_Diamond.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	int n;

	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < n - i; j++)
			printf(" ");
		for (int j = 0; j < 2 * i - 1; j++)
			printf("*");
		printf("\n");
	}


	for (int i = n; i >= 1; i--) {
		for (int j = 1; j <= n - i; j++)
			printf(" ");
		for (int j = 1; j <= 2 * i - 1; j++)
			printf("*");
		printf("\n");
	}
}

