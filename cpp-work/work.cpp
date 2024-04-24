#include <iostream>

int main() {
	// 문제 12. a, b 변수 두 개를 입력받고, 사칙연산을 출력하시오.
	
	// 12-1. 안내 메시지 출력
	std::cout << "사용할 변수 a, b를 입력하세요." << std::endl;

	// 12-2. 변수 선언
	int a;
	int b;

	// 12-3. a 값 입력받기
	std::cout << "사용할 변수 a의 값은?" << std::endl;
	std::cin >> a;

	// 12-4. b 값 입력받기 
	std::cout << "사용할 변수 b의 값은?" << std::endl;
	std::cin >> b;

	// 12-5. 입력받은 값 출력
	std::cout << "변수 a의 값은 " << a << "이라고 입력하셨습니다." << std::endl;
	std::cout << "변수 b의 값은 " << b << "이라고 입력하셨습니다." << std::endl;

	// 12-6. 사칙연산 출력
	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << a - b << std::endl;
	std::cout << "a * b = " << a * b << std::endl;
	std::cout << "a / b = " << a / b << std::endl;

	return 0;
}

// 콘솔 출력 내용
/*
변수 a의 값은 10이라고 입력하셨습니다.
변수 b의 값은 5이라고 입력하셨습니다.
a + b = 15
a - b = 5
a * b = 50
a / b = 2
*/