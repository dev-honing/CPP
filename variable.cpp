#include <iostream>
#include <string>

int main(void) {

    // 문자형과 문자열의 차이
    // 문자형 변수 선언
    char alphabet = 'A'; // 문자(char)은 단일 문자를 나타내는 데 사용되고, 1바이트의 공간을 차지한다.
    // 문자형(char)의 크기
    std::cout << "char의 크기: " << sizeof(alphabet) << "바이트" << std::endl; // sizeof 연산자는 변수의 크기를 반환한다.

    // 문자열 변수 선언
    std::string newLang = "C++"; // 문자열(string)은 문자들의 집합을 나타내는 데 사용되고, 크기는 문자열에 포함된 문자의 수에 따라 달라진다.
    // 문자열(string)의 크기
    std::cout << "string의 크기: " << newLang.size() << "바이트" << std::endl; // 

    return 0;
}
