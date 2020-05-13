#ifndef H_complexType
#define H_complexType

#include <iostream>
#include <cmath>

using namespace std;

class complexType
{
public:
	double real;
	double imaginary;

	friend ostream& operator<<(ostream&, const complexType&);
	friend istream& operator>>(istream&, complexType&);
	
	void setComplex(const double&, const double&);
	void getComplex(double&, double&) const;
	complexType(double r = 0, double i = 0);
	complexType operator+(const complexType&) const;
	complexType operator-(const complexType&) const;
	complexType operator*(const complexType&) const;
	complexType operator/(const complexType&) const;
	bool operator==(const complexType&) const;
};

#endif