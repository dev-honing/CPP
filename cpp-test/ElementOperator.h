// ElementOperator.h - 클래스 선언부
#pragma once

// 클래스 선언
class ElementOperator {
public:
	// 생성자 선언
	ElementOperator(int x, int y);

	// 멤버 함수 선언
	// 덧셈 메서드
	int plus();

	// 뺄셈 메서드
	int minus();

	// 곱셈 메서드
	int multiply();

	// 나눗셈 메서드
	int divide();

private:
	// 멤버 변수
	int operand1;
	int operand2;
};
