#include <iostream>

int main(void) {
	// 문제 1. 개행문자 \n을 사용하여 원하는 문자열을 각각 한 줄, 여러 줄로 출력하시오.
	// 1-1. 한 줄로 출력
	std::cout << "안녕하세요~ " << "C++ 프로그래밍에 입문한 주니어 개발자입니다!" << std::endl;

	// 1-2. \n을 사용하여 여러 줄로 출력
	std::cout << "안녕하세요~\n" << "C++ 프로그래밍에 입문한 주니어 개발자입니다!" << std::endl;

	return 0;
}