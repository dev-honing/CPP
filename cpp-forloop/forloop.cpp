#include <iostream>

int main(void) {
	// for문과 loop
	
	for (int i = 0; i < 10; i++) {
		std::cout << "그냥 출력" << std::endl;
		if (i == 9) { // ! 마지막을 10으로 표기하지 않도록 주의!(i는 0부터 시작한다)
			std::cout << "마지막 출력" << std::endl;
		}
	}

	return 0;

}