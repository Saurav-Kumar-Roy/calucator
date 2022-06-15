#pragma once
class C_Calculator{
public:
	double num1;
	double num2;
	char oper;
	C_Calculator()=default;
	C_Calculator(double num1,double num2,char oper);
	CString solve();
};

