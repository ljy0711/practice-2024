// 064_c++_2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// 중요함

#include <iostream>
using namespace std;

int main()
{
    int a[10];

    cout << "10개의 숫자를 입력하세요 : ";

    for (int i = 0; i < 10; i++)
        cin >> a[i];

    int max=INT_MAX, min=INT_MIN, sum = 0;

    for (int x : a) {
        if (x < min)
            min = x;
        if (x > max)
            max = x;
        sum += x;
    }
    cout << "최댓값" << max << endl;
    cout << "최솟값" << min << endl;
    cout << "평균" << sum/10.0 << endl;


  
}

