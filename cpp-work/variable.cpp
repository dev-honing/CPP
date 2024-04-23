#include <iostream>
#include <string>

int main(void) {
	// 문제 3. 띄어쓰기 구현 - 변수를 선언하고 가운데 공백을 반영하여 출력하시오.
	std::string date = "2024-04-24"; // date 변수에 날짜 데이터를 선언 및 초기화
	std::string day = "수"; // day 변수에 요일 데이터를 선언 및 초기화

	// 변수에 저장된 데이터를 출력
	std::cout << "오늘의 날짜는 " << date << "이고, 오늘은 " << day << "요일입니다." << std::endl;

	return 0;
}