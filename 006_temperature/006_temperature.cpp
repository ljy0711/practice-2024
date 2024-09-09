// 006_temperature.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    float f1 = 100.0;
    float f2 = 80.0;
    float f3 = 60.0;

    printf("화씨\t섭씨\n");
    printf("============\n");
    printf("100.0\t%.1f\n", (5.0/9.0)*(f1-32.0));
    printf(" 80.0\t%.1f\n", (5.0/9.0)*(f2-32.0));
    printf(" 60.0\t%.1f\n", (5.0/9.0)*(f3-32.0));

}

