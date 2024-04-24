#include <iostream>
#include <string>

// 구조체 정의
struct Person {
	std::string name;
	int birthYear;
	int age;
	std::string interest;
};

// << 연산자 오버로딩 함수 정의
std::ostream& operator<<(std::ostream& os, const Person& person) {
	os << "Name: " << person.name << ", Birth Year: " << person.birthYear << ", Age: " << person.age << ", Interest: " << person.interest;
	return os;
}

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

	// Ho 객체 출력
	std::cout << "Person 객체의 형태는 다음과 같습니다.\n" << Ho << std::endl;

	return 0;

}