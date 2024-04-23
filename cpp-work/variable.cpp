#include <iostream>
#include <string>

int main(void) {
	// 문제 7. 변수 a, b, c, d를 선언하고 값 3, 5, 3, 4를 각각 할당하고 ((a+b)*c)/d 수식의 값을 출력하시오.

	// 7-1. 변수 선언
	int a;
	int b;
	int c;
	int d;

	// 7-2. 값을 할당
	a = 3;
	b = 5;
	c = 3;
	d = 4;

	// 7-3. ((a+b)*c)/d 수식의 값
	std::cout << "((a+b)*c)/d = " << ((a + b) * c) / d << std::endl;


	return 0;
}