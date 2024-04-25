// ElementOperator.cpp - 클래스 구현부

#include "ElementOperator.h"
#include <iostream>

// ElementOperator 클래스의 생성자 정의
ElementOperator::ElementOperator(int x, int y) {
	operand1 = x;
	operand2 = y;
}

// 사칙연산 메서드 작성
// 덧셈
int ElementOperator::plus() {
	return operand1 + operand2;
}

// 뺄셈
int ElementOperator::minus() {
	return operand1 - operand2;
}

// 곱셈
int ElementOperator::multiply() {
	return operand1 * operand2;
}

// 나눗셈
int ElementOperator::divide() {
	if (operand2 != 0) {
		return operand1 / operand2;
	}
	else {
		std::cout << "0으로는 나눌 수 없습니다." << std::endl;
		return 0;
	}
	
}