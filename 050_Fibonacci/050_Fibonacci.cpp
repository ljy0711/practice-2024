// 050_Fibonacci.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

#include<stdio.h>

int fibo(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return fibo(n - 1) + fibo(n - 2);
}

int main()
{
	for (int i = 1; i <= 20; i++)
		printf("%d ", fibo(i));
	printf("\n");
	//printf("fibo(%d) = %d\n", i, fibo(i));
}
