#include <iostream>

int main() {
	// 문제 13. 숫자 3개를 입력받고, 그 중에서 가장 큰 수부터 출력하시오.
	// (단, 입력된 숫자들은 모두 다르고, 같은 숫자인지는 고려하지 않아도 좋다.)

	// 13-1. 변수 선언
	int first;
	int second;
	int third;

	// 13-2. 입력받기
	// 1) 첫번째
	std::cout << "1) 숫자를 골라주세요." << std::endl;
	std::cin >> first;

	// 2) 두번째
	std::cout << "2) 숫자를 골라주세요." << std::endl;
	std::cin >> second;

	// 3) 세번째
	std::cout << "3) 숫자를 골라주세요." << std::endl;
	std::cin >> third;

	// 13-3. 가장 큰 수 고르기
	// 13-3-1. 1번이 가장 큰 경우를 가정
	if (first > second && first > third) { // 1번 > 2번, 1번 > 3번
		if (second > third) { // 2번 > 3번
			std::cout << first << ", " << second << ", " << third << " 순으로 큽니다." << std::endl;
		}
		else { // 2번 < 3번
			std::cout << first << ", " << third << ", " << second << " 순으로 큽니다." << std::endl;
		}
	}
	// 13-3-2. 2번이 가장 큰 경우를 가정
	if (second > first && second > third) { // 2번 > 1번, 2번 > 3번
		if (first > third) { // 1번 > 3번
			std::cout << second << ", " << first << ", " << third << " 순으로 큽니다." << std::endl;
		}
		else { // 3번 > 1번
			std::cout << second << ", " << third << ", " << first << " 순으로 큽니다." << std::endl;
		}
	}
	// 13-3. 3번이 가장 큰 경우를 가정
	if (third > first && third > second) { // 3번 > 1번, 3번 > 2번
		if (second > first) { // 2번 > 1번
			std::cout << third << ", " << second << ", " << first << " 순으로 큽니다." << std::endl;
		}
		else { // 1번 > 2번
			std::cout << third << ", " << first << ", " << second << " 순으로 큽니다." << std::endl;
		}
	}

	return 0;
}