// test2.cpp

#include <iostream>

// 소수값인지 검사하는 함수(불리언 함수)
bool isPrime(int n) {
    // * 1과 자기 자신은 소수 x
    // * 2는 소수 o, 2의 배수는 소수 x
    // * 거듭제곱은 자기 자신을 약수로 가지므로 소수 x

    // 1은 소수 x
    if (n <= 1) {
        return false;
    }
    // 2는 소수 o
    if (n == 2) {
        return true;
    }
    // 2를 제외한 짝수는 소수 x
    if (n % 2 == 0) {
        return false;
    }
    // 제곱근은 소수 x
    for (int i = 3; i * i <= n; i += 2) { // 3부터
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// 범위 내의 소수를 출력하는 함수
void printPrimeNumbers(unsigned int range) {
    std::cout << "범위 내의 소수는 ";

    // 2부터 넣어 소수값인지 검사하고 true를 반환한 것들을 출력
    for (int i = 2; i <= range; ++i) {
        if (isPrime(i) == true) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

// 프로그램의 main() 함수
int main() {
    
    // 사용자로부터 범위 입력받기
    unsigned int range;
    std::cout << "범위를 입력하세요.";
    std::cin >> range;

    // 소수를 출력하는 함수를 호출
    printPrimeNumbers(range);

    return 0;
}
