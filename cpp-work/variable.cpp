#include <iostream>
#include <string>

int main(void) {
	// 문제 4. 변수의 선언과 할당 - 변수 timer를 선언하고, 남은시간으로 값 5를 할당하시오.
	// 변수 timer를 기준으로 남은시간의 추가와 삭제를 통한 업데이트 기능을 구현했다고 가정하고, 다음을 출력하시오.
	/* 
	* 1) 2초 추가된 타이머의 남은시간
	* 2) 3초 삭제된 타이머의 남은시간
	*/

	int timer; // 변수 timer 선언
	timer = 5; // 값으로 5를 할당

	// 1) timer에 2초 추가
	timer = timer + 2;
	std::cout << "업데이트된 타이머의 남은시간은 " << timer << "초입니다." << std::endl;

	// 2) timer에 3초 삭제
	timer = timer - 3;
	std::cout << "업데이트된 타이머의 남은시간은 " << timer << "초입니다." << std::endl;


	return 0;
}