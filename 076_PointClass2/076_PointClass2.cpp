// 076_PointClass2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// 075-76 연결문제 (시험 예상 문제)

#include <iostream>
using namespace std;

class Point {
protected: //void Print() {x와 y}를 쓰려면 protected로 사용
    int x, y;
public:
    Point() : x(0), y(0) {} //초기화
    Point(int x, int y) : x(x), y(y) {} //두번재 생성자 
    void Set(int x, int y) {
        this->x = x;
        this->y = y;
    }
    void Print() {
        cout << "(" << x << ", " << y << ")" << endl;
    } //Print1
};

class ColorPoint : public Point {
private:
    string color;
public:
    ColorPoint() : Point(), color("black"){} //디폴트 생성자
    ColorPoint(int x, int y, string color) : Point(x, y), color(color) {}
    void SetColor(string color) {
        this->color = color;
    }
    void Print() { 
        cout << "(" << x << ", " << y << ")" << color << endl;
    } //Print2
};

int main()
{
    Point a(10, 20);
    ColorPoint c(30, 30, "red");

    c.Set(40, 40);
    c.SetColor("blue");
    a.Print();
    c.Print(); //Print2 실행됨

}

