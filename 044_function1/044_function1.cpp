// 044_function1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
#include <stdio.h>
double plus(double a, double b) {
    return a + b;
}
double minus(double a, double b) {
    return a - b;
}
double multiply(double a, double b) {
    return a * b;
}
double divide(double a, double b) {
    return a / b;
}

int main()
{
    double x, y;

    printf("두 숫자를 입력하세요 : ");
    scanf_s("%lf %lf", &x, &y);
    printf("더하기 = %.2lf\n",plus(x,y));
    printf("빼기 = %.2lf\n", minus(x, y));
    printf("곱하기 = %.2lf\n", multiply(x, y));
    printf("나누기 = %.2lf\n", divide(x, y)); 
}

