// 029_array.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int a[10];
    int max, min;

    printf("10개의 숫자 입력: ");
    for (int i = 0; i < 10; i++)
        scanf_s("%d", &a[i]);

    max = min = a[0];
    for (int i = 1; i < 10; i++) {
        if (max < a[i])
            max = a[i];
        if (min > a[i])
            min = a[i];

    }
    printf("max = %d, min = %d\n", max, min);
}

