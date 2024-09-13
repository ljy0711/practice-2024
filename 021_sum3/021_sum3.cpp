// 021_sum3.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
	int n;  //변수 선언
	int a=0; // 숫자
	int b=0; //홀수
	int c=0; //짝수

	printf("n을 입력하시오 :");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		a += i;
		if (i % 2 == 0)
			c += i;
		else
			b += i;
	}
	printf("숫자의 합: %d\n", a);
	printf("홀수의 합: %d\n", b);
	printf("짝수의 합: %d\n", c);

	return 0;
}

