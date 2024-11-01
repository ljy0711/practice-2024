// 048_cycle.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//swap 함수 관련 문제

#include <stdio.h>
void cycle(int* a, int* b, int* c) {
    int tmp = *a;
    *a = *b;
    *b = *c;
    *c = tmp;
}

int main()
{
    int a, b, c;
    printf("3개의 숫자를 입력하세요 : ");
    scanf_s("%d %d %d", &a, &b, &c);
    cycle(&a,&b,&c); //주소라서 &쓰기
    printf("%d %d %d", a, b, c);
}

