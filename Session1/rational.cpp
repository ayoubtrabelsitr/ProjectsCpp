
#include<iostream>
#include<format>
#include<string>


using std::cout;
using std::format;
using std::string;



class Rational {
	int n{0};
	int d{1};
public:
	Rational(int numerator = 0, int denominator = 1) :n(numerator), d(denominator) {};//default constructor
	~Rational();
	int getN();
	int getD();



};
Rational::Rational(int numerator = 0, int denominator = 1)
{
	
}

Rational::~Rational()
{

}


int main()
{



}