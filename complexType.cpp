#include <iostream>
#include <cmath>
#include "complexType.h"

using namespace std;

ostream& operator<<(ostream& osO, const complexType& complex)
{
	osO << "(";
	osO << complex.real;
	osO << ", ";
	if (complex.imaginary != 1 && complex.imaginary != -1)
		osO << complex.imaginary;
	if (complex.imaginary == -1)
		osO << "-";
	if (complex.imaginary != 0)
		osO << "i";
	osO << ")";
	return osO;
}

istream& operator>>(istream& isO, complexType& complex)
{
	char ch;
	isO >> ch;
	isO >> complex.real;
	isO >> ch;
	isO >> complex.imaginary;
	isO >> ch;
	return isO;
}

void complexType::setComplex(const double& r, const double& i)
{
	real = r;
	imaginary = i;
}

void complexType::getComplex(double& r, double& i) const
{
	r = real;
	i = imaginary;
}

complexType::complexType(double r, double i)
{
	real = r;
	imaginary = i;
}

complexType complexType::operator+(const complexType& other) const
{
	complexType temp;
	temp.real = real + other.real;
	temp.imaginary = imaginary + other.imaginary;
	return temp;
}

complexType complexType::operator-(const complexType& other) const
{
	complexType temp;
	temp.real = real - other.real;
	temp.imaginary = imaginary - other.imaginary;
	return temp;
}

complexType complexType::operator*(const complexType& other) const
{
	complexType temp;
	temp.real = (real * other.real) - (imaginary * other.imaginary);
	temp.imaginary = (real * other.imaginary) + (imaginary * other.real);
	return temp;
}

complexType complexType::operator/(const complexType& other) const
{
	complexType temp;
	temp.real = ((real + imaginary) * other.real) / (pow(other.real, 2) + pow(other.imaginary, 2));
	temp.imaginary = ((imaginary - real) * other.imaginary) / (pow(other.real, 2) + pow(other.imaginary, 2));
	return temp;
}

bool complexType::operator==(const complexType& other) const
{
	return (real == other.real && imaginary == other.imaginary);
}