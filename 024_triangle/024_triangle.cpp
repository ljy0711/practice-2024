// 024_triangle.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int n;
    printf("자연수 n을 입력: ");
    scanf_s("%d", &n);

    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("%d", j);
        printf("\n");
    }
}

