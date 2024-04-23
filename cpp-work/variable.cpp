#include <iostream>
#include <string>

int main(void) {
	// 문제 6. 계산기 구현 - 변수 a, b를 선언하고 a에는 100, b에는 10을 할당하고 다음을 출력하시오.
	/*
	* 
	1) a + b

	2) a - b

	3) a * b

	4) a / b
	*/

	// 6-1. 변수 선언
	int a;
	int b;

	// 6-2. 값 할당
	a = 100;
	b = 10;

	// 6-3. 계산기 구현
	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << a - b << std::endl;
	std::cout << "a * b = " << a * b << std::endl;
	std::cout << "a / b = " << a / b << std::endl;

	return 0;
}