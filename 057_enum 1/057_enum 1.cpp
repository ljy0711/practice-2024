// 057_enum 1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    enum Day { 일요일, 월요일, 화요일, 수요일, 목요일, 금요일, 토요일 };

    Fruit fruit;

    printf("과일 선택(Apple:0, Banana:1, Orange:2) : ");
    scanf_s("%d", &fruit);

    if (fruit == Apple)
        printf("Apple\n");
    else if (fruit == Banana)
        printf("Banana\n");
    else if (fruit == Orange)
        printf("Orange\n");
}