// 049_recursion.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
long long fact(int n) {
	int f = 1;

	for (int i = 1; i <= n; i++)
		f *= i;
	return f;
}

long long Fact(int n) {
	if (n == 1)
		return 1;
	else
		return Fact	(n - 1) * n;
}

int main()
{
	int n;
	printf("n을 입력 : ");
	scanf_s("%d", &n);
	
	for (int i = 1; i <= n; i++)
		printf("%d ", fact(i));
	printf("\n");

	for (int i = 1; i <= n; i++)
		printf("%d! = %d\n", i, Fact(i));
}

