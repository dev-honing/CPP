#include <iostream>
#include <string>

int main(void) {
	// 문제 5. 덧셈 구현 - 변수 a, b를 선언하고 a에는 10, b에는 2를 할당한 뒤, a+b를 출력하시오.
	
	// 5-1. 변수 a, b 선언
	int a;
	int b;

	// 5-2. 값을 할당
	a = 10;
	b = 2;

	// 5-3. a+b를 출력
	std::cout << "정수 a와 b의 합은 " << a + b << "입니다." << std::endl;


	return 0;
}