#include <iostream>

int main(void) {
	// 문제 2. 네임스페이스를 사용하여 std::를 생략하고 “Hello, C++!”를 출력하시오.
	
	// 2-1. 생략할 네임 스페이스를 명시
	using namespace std;

	// 2-2. std::를 생략하고 출력
	cout << "Hello, C++!" << endl;

	return 0;
}