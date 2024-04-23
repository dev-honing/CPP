#include <iostream>
#include <string>

using namespace std;
int main(void) {
	// 문제 9. 트레이스 연습 - Visual Studio에서 F10 키를 통해 '프로시저 단위 실행'과 '조사식' 확인을 점검합니다.
	// 작성된 코드블록을 추가하고 변수 a를 조사식으로 등록하고 값의 변화를 추적하시오.
	// 프로시저 단위 실행 단축키: F10
	// 조사식은 '디버그 > 창 > 조사식'에서 드래그 혹은 검색을 통해 추가 가능

	// 변수 a를 조사식으로 등록하고 주석으로 값의 변화를 추적
	int a; // 605(쓰레기 값)
	a = 8; // 8

	cout << a;
	a = a + 1; // 9

	a++; // 10
	a = 3; // 3
	a = a + 1; // 4
	a++; // 5

	cout << "a값은 : " << a << endl;
	a = a + 1; // 6
	a++; // 7
	cout << "마지막 a값은 : " << a << endl;

	return 0;
}