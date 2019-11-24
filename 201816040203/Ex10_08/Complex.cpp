#include<iostream>
#include"Complex.h"
using namespace std;

Complex::Complex(double realPart, double imaginaryPart)
	:real(realPart),
	imaginary(imaginaryPart)
{

}

Complex Complex::operator+(const Complex &operand2) const
{
	return Complex(real + operand2.real,
		imaginary+operand2.imaginary);
}

Complex Complex::operator-(const Complex& operand2) const
{
	return Complex(real - operand2.real,
		imaginary - operand2.imaginary);
}

Complex Complex::operator*(const Complex& operand2) const
{
	return Complex(real*operand2.real - imaginary*operand2.imaginary,
		real*operand2.imaginary + imaginary*operand2.real);
}
bool  Complex::operator==(const Complex& operand2) const
{
	if (real == operand2.real)
        return true;
	else if (imaginary == operand2.imaginary)
			return true;
	return false;
}

bool  Complex::operator!=(const Complex& operand2) const
{
	if (real != operand2.real)
		return true;
	else if(imaginary != operand2.imaginary)
			return true;
	return false;
}
ostream &operator<<(ostream &output,const Complex &complex)
{
	output << "("<<complex.real<<", "<<complex.imaginary<<")";
	return output;
}
istream &operator>>(istream &input, Complex &complex)
{

	input >> complex.real>>complex.imaginary;
	return input;
}
