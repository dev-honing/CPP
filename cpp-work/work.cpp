#include <iostream>

int main() {
	// 문제 11. “오늘 마신 커피는 몇 잔인가요?”라는 질문을 출력하고 cin을 사용하여 오늘 마신 커피가 몇 잔인지 입력하시오. 그리고 사용자가 입력한 정보를 변수에 담아, 적정량에 대한 임의의 기준에 따라 메시지를 출력하시오.

	// 11-1. 질문지를 콘솔 출력
	std::cout << "오늘 마신 커피는 몇 잔인가요?" << std::endl;

	// 11-2. 오늘 마신 커피를 담을 todayCoffee를 변수로 선언
	int todayCoffee;

	// 11-3. 사용자 입력 및 변수에 저장
	std::cin >> todayCoffee;

	// 11-4. 조건문 작성
	if (todayCoffee >= 3) {
		std::cout << "너무 많이 마셨어요. 더이상 마시면 몸에 해롭습니다." << std::endl;
	}
	else {
		if (todayCoffee == 2) {
			std::cout << "적당량의 커피를 마셨네요. 훌륭합니다!" << std::endl;
		}
		else {
			if (todayCoffee == 1) {
				std::cout << "오늘은 컨디션이 매우 좋군요. 좋은 하루 보내세요!" << std::endl;
			}
		}

	}



	return 0;
}