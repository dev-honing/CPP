// test.cpp

#include <iostream>
#include "ElementOperator.h"

int main(void) {
	
	// 변수 선언
	int operand1, operand2;

	// 피연산자를 입력받고 저장
	std::cout << "첫번째 피연산자를 입력하세요." << std::endl;
	std::cin >> operand1;
	std::cout << "두번째 피연산자를 입력하세요." << std::endl;
	std::cin >> operand2;

	// ElementOperator 클래스의 객체 생성
	ElementOperator op(operand1, operand2);

	// 사칙연산 수행
	int resultPlus = op.plus();
	int resultMinus = op.minus();
	int resultMultiply = op.multiply();
	int resultDivide = op.divide();

	// 안내 메시지 출력
	std::cout << "입력한 피연산자는 " << operand1 << "," << operand2 << "입니다." << std::endl;

	// 사칙연산 결과 출력
	std::cout << "덧셈의 결과는 " << resultPlus << std::endl;
	std::cout << "뺄셈의 결과는 " << resultMinus << std::endl;
	std::cout << "곱셈의 결과는 " << resultMultiply << std::endl;
	std::cout << "나눗셈의 결과는 " << resultDivide << std::endl;

	return 0;
}