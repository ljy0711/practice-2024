// 055_struct 3.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
#include <stdio.h>
#include <stdlib.h> //랜덤은 include 2개 추가
#include <time.h>
#include <math.h> //제곱근쓰려면 필요(수학함수 사용 시)

struct point {
	int x, y;
}; //점이라는 구조체 만듦

double distance(point p1, point p2); //함수의 프로토타입(원형)

int main()
{
	point p[100]; //점 100개를 배열로 만듦
	
	srand(time(0)); //srand 랜덤 함수, time을 0으로 둠.
	for (int i = 0; i < 100; i++) {
		p[i].x = rand();
		p[i].y = rand();
	}

	for (int i = 0; i < 100; i++) {
		printf("p[%d] = (%d, %d)\n", i, p[i].x, p[i].y);
	} //점의 좌표 출력

	//모든 쌍의 거리를 계산하기 위해서는 이중 반복문을 사용.
	double min = INT_MAX;
	int min1, min2; //인덱스라서 정수

	for (int i = 0; i < 100; i++) 
		for (int j = i + 1; j < 100; j++) {
			double d = distance(p[i], p[j]); //제곱근이라서  double 사용
			if (d < min) {
				min = d;
				min1 = i;
				min2 = j;
			}
		}
	printf("가장 가까운 점의 쌍 : (%d,%d)-(%d,%d) = %f\n", p[min1].x, p[min1].y, p[min2].x, p[min2].y, min);
	printf("가장 가까운 점의 쌍 : p[%d]-p[%d]\n", min1, min2); //주소를 출력
}
double distance(point p1, point p2) {
	return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));//sqrt는 제곱근
} //함수 만듦