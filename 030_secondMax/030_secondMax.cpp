// 030_secondMax.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int a[10];
    int max, sec;

    printf("10개의 숫자 입력: ");
    for (int i = 0; i < 10; i++)
        scanf_s("%d", &a[i]);

    
// max와 second max 를 찾아라
    int max2;
    max = max2 = a[0];

    for (int i = 1; i < 10; i++) {
        if (a[i] > max) {
            max2 = max;
            max = a[i];
        }
        else if (a[i] > max2) {
            max2 = a[i];
        }
        printf("i=%d : max=%d, max2=%d\n", i, max, max2);

    }
    printf("max = %d , max2 = %d\n", max, max2);
}

