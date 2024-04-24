#include <iostream>

int main() {
	// 문제 15. 행운의 수 - 숫자 3개를 입력받고, 세 수의 합이 세 수의 곱보다 크거나 같으면 "행운의 수"를 출력하고, 그렇지 않으면 "소소한 수"를 출력하시오.

	// 15-1. 입력받을 숫자를 변수 선언
	int input1;
	int input2;
	int input3;

	// 15-2. 입력받은 숫자를 저장
	std::cout << "첫번째 숫자를 입력하세요." << std::endl;
	std::cin >> input1;
	
	std::cout << "두번째 숫자를 입력하세요." << std::endl;
	std::cin >> input2;

	std::cout << "세번째 숫자를 입력하세요." << std::endl;
	std::cin >> input3;

	// 15-3. 조건문 적용
	if (input1 + input2 + input3 >= input1 * input2 * input3) {
		std::cout << "행운의 수" << std::endl;
	}
	else {
		std::cout << "소소한 수" << std::endl;
	}

	return 0;
}