// C++ 작성법 알아보기
// 1. 주석
// 1-1. 한 줄 주석
// 이것은 한 줄 주석이다.
// 1-2. 여러 줄 주석
/*
    여러 줄 주석을 작성해본다.
    JSDoc과 닮았지만, C++에서는 이렇게 작성한다.
*/

// // 2. 출력 함수
// #include <iostream>

// int main() {
//     std::cout << "Hello, C++!" << std::endl;
//     return 0;
// }

// 3. 변수 선언
#include <iostream>

int main() {
    // 3-1. 정수형 변수 선언과 초기화
    int number = 10;
    
    // 3-2. 실수형 변수 선언
    float float_number = 3.14f;

    // 3-3. 문자형 변수 선언과 초기화
    char letter = 'A';

    // 3-4. 문자열 변수 선언과 초기화
    std::string name = "BHN";

    // 3-5. 변수 출력
    std::cout << "정수형 변수: " << number << std::endl;
    std::cout << "실수형 변수: " << float_number << std::endl;
    std::cout << "문자형 변수: " << letter << std::endl;
    std::cout << "문자열 변수: " << name << std::endl;

    return 0;
}