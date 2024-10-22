// 033_strcat.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#define _CRT_SECURE_NO_WARNIGS
#include <stdio.h>
#include<string.h>

int main()
{ // 문자열을 하나로 연결한 후 출력
    char y[10];
    char id[10];
    char n[10];
    char s[30];

    printf("학년 : ");
    scanf_s("%s", y, sizeof(y));
    printf("학번 : ");
    scanf_s("%s", id, sizeof(id));
    printf("이름 : ");
    scanf_s("%s", n, sizeof(n));
    

    strcat(s, y);
    strcat(s, "학년");
    strcat(s, id);
    strcat(s," ");
    strcat(s, n);
    printf("%s\n", s);

}

