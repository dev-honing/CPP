#include <iostream>

int main() {

	// 제어문(if-else문)과 분기
	
	// if-else문은 조건에 따라 다른 동작을 수행하도록 하는 제어문이다.
	// if문은 조건이 참인 경우에 소스코드를 실행하고, else문은 조건이 거짓인 경우에 소스코드를 실행한다.
	// 이처럼 조건에 따라 참, 거짓으로 나뉘는 것을 분기라고 한다.

	int a = 3;
	if (a > 5) { // 조건은 거짓이므로 else문이 실행되어야 한다.
		std::cout << "조건이 참이므로, if문을 실행합니다." << std::endl;
	}
	else {
		std::cout << "조건이 거짓이므로, else문을 실행합니다." << std::endl;
	}

	return 0;



}