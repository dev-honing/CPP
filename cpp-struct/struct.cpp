#include <iostream>
#include <string>

// 구조체 정의
struct Person {
	std::string name;
	int birthYear;
	int age;
	std::string interest;
};

int main(void) {
	// 구조체 변수 생성 및 초기화
	Person Ho;
	Ho.name = "Byeon Ho Nyeong";
	Ho.birthYear = 1997;
	Ho.age = 26;
	Ho.interest = "C++";

}