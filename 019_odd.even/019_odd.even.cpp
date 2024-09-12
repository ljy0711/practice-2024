// 019_odd.even.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int n;
    int oddsum=0;
    int evensum=0;

    printf("숫자입력: ");
    scanf_s("%d", &n);

    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0)
            evensum += i;
        else
            oddsum += i;
    }
    printf("홀수의 합:%d\n", oddsum);
    printf("짝수의 합:%d\n",evensum);
    return 0;

}

