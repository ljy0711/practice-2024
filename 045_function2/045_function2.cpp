// 045_function2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//교과서 p173 : Call-by-value, Call-by-address

#include <stdio.h>

void swap(int x, int y) {
    int tmp = x;
    x = y;
    y = tmp;
}
void swap2(int* px, int* py) {
    int tmp = *px;
    *px = *py;
    *py = tmp;
}

int main()
{
    int a, b;

    printf("a,b를 입력 :");
    scanf_s("%d %d", &a, &b);
    swap(a, b);

    printf("a=%d b=%d\n", a, b);

    swap2(&a, &b);
    printf("a=%d b=%d\n", a, b);
}

