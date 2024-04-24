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

	/*
	* Ho: Person 구조체의 인스턴스, Person 인스턴스(객체)
	* name, age, birthYear, interest: 멤버 변수
	*/

	// Ho 객체의 각 멤버 변수 출력
	std::cout << "Ho의 이름은 " << Ho.name << std::endl;
	std::cout << "Ho의 출생연도는 " << Ho.birthYear << std::endl;
	std::cout << "Ho의 나이는 " << Ho.age << std::endl;
	std::cout << "Ho의 관심사는 " << Ho.interest << std::endl;

	return 0;

}