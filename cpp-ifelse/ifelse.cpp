#include <iostream>

int main() {

	// 제어문(if-else문)과 분기

	// 비교 연산자
	// if문의 조건을 비교하기 위해서는 대입 연산자(=)이 아닌, 비교 연산자(==)를 사용해야 한다.
	int a = 3;
	if (a == 3) { // 비교 연산자를 사용하는 것이 올바르다.
		std::cout << "조건이 참" << std::endl;
	}
	else {
		std::cout << "조건이 거짓" << std::endl;
	}

	return 0;

}