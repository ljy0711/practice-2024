// 026_numberTriangle.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int n;

    printf("n 입력: ");
    scanf_s("%d", &n);

    for (int i = n; i > 0; i--) {
        for (int j = i; j > 0; j--)
            printf("%d", j);
        printf("\n");
    }
}

