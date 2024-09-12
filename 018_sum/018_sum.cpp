// 018_sum.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
	int n;
	
	printf("자연수 입력: ");
	scanf_s("%d", &n);

	int sum = 0;
	for (int i = 1; i <= n; ++i) {
		sum += i;
	}
	printf("1부터 %d의 합 : %d\n", n, sum);

}


