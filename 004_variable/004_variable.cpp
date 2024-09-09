// 004_variable.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    char ch = 'A'; // 문자는 작은 따옴표
    char str[20] = "Hello World!"; // 문자열은 큰 따옴표
    float fit = 10.234;
    int no = 150;
    double dbl = 20.123456; // float랑 비슷 (의미:소수점)
    int oct = 226;
    int hex = 96;



    printf("Character is %c \n",  ch);
    printf("string is %s \n", str);
    printf("Float Value is %.6f \n", fit);
    printf("Integer value is %d \n", no);
    printf("Double value is %lf \n", dbl); // L(롱)F
    printf("Octal value is %d \n", oct);
    printf("Hexadeciimal value is %d \n", hex);
}

