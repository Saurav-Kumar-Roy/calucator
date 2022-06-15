
#include "pch.h"
#include "C_Calculator.h"

C_Calculator::C_Calculator(double num1, double num2, char oper) {
	this->num1 = num1;
	this->num2 = num2;
	this->oper = oper;
}


CString C_Calculator::solve() {
	if (oper == '+') {
		CString out;
		out.Format("%.2f",num1 + num2);
		return out;
	}
	else if (oper == '-') {
		CString out;
		out.Format("%.2f", num1 - num2);
		return out;
	}
	else if (oper == 'x') {
		CString out;
		out.Format("%.2f", num1 * num2);
		return out;
	}
	else if (oper == '/') {
		if (num2 == 0) {
			return "Undefiend.";
		}
		CString out;
		out.Format("%.2f", num1 / num2);
		return out;
	}

}