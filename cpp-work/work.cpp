#include <iostream>

int main() {
	// 문제 14. 입력과 증감식 - 숫자 1개를 변수 input에 입력받아 저장하고, 입력한 숫자가 3보다 크면 input 값에서 1을 더하고 출력(input++;)
	// 그렇지 않으면, input 값에서 1을 빼고 출력(input--;)

	// 14-1. 변수 input 선언
	int input;

	// 14-2. 안내 메시지 출력
	std::cout << "숫자를 입력하세요." << std::endl;

	// 14-3. 숫자 입력받기
	std::cin >> input;

	// 14-4. 조건문 작성
	if (input > 3) {
		input++;
		std::cout << "input에 저장된 값은 " << input << "입니다." << std::endl;
	}
	else {
		input--;
		std::cout << "input에 저장된 값은 " << input << "입니다." << std::endl;
	}

	return 0;
}