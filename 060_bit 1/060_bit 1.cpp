// 060_bit 1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int x;

    scanf_s("%d", &x);


    printf("x = %d\n", x);
    printf("(1 << 2) = %d\n", 1 << 2);
    printf("%d\n", x & (1 << 2));  // 1을 왼쪽으로 두번 shift 시킨다는 의미

    printf("아래 4자리 = % d\n", x & 15);

    for (int i = 1; i < 4; i++)
        printf("%d번 시프트 : %d\n", i, x);
}