
#include<iostream>
#include<format>
#include<string>


using std::cout;
using std::format;
using std::string;

const string nanstr{ "[NAN]" };

class Rational {
	int n{0};
	int d{1};
public:
	Rational(int numerator = 0, int denominator = 1) :n(numerator), d(denominator) {};//default constructor
	Rational(const Rational& rhs) :n(rhs.n), d(rhs.d) {};//copy constructor
	~Rational();
	int getN() const { return n; };
	int getD() const { return d; };
	Rational reduce() const; // reduce fraction
	string str() const; 
	string raw_str() const;
	Rational& operator = (const Rational&);
	Rational operator + (const Rational&) const;
	Rational operator - (const Rational&) const;
	Rational operator * (const Rational&) const;
	Rational operator / (const Rational&) const;



};
Rational Rational::reduce() const {
    if (n == 0 || d <= 3) return *this;
    for (auto div = d - 1; div; --div) {
        if (n % div == 0 && d % div == 0) {
            return Rational(n / div, d / div);
        }
    }
    return *this;
}

string Rational::str() const {
    if (d == 0) return nanstr;
    if (d == 1 || n == 0) return std::to_string(n);

    auto abs_n = abs(n);     // absolute value
    if (abs_n > d) {
        auto whole = n / d;
        auto remainder = abs_n % d;
        if (remainder) return std::to_string(whole) + " " + Rational(remainder, d).str();
        else return std::to_string(whole);
    }
    else {
        return reduce().raw_str();
    }
}

string Rational::raw_str() const {
    return std::to_string(n) + "/" + std::to_string(d);
}

Rational& Rational::operator = (const Rational& rhs) {
    if (this != &rhs) {
        n = rhs.getN();
        d = rhs.getD();
    }
    return *this;
}

Rational Rational::operator + (const Rational& rhs) const {
    return Rational((n * rhs.d) + (d * rhs.n), d * rhs.d);
}

Rational Rational::operator - (const Rational& rhs) const {
    return Rational((n * rhs.d) - (d * rhs.n), d * rhs.d);
}

Rational Rational::operator * (const Rational& rhs) const {
    return Rational(n * rhs.n, d * rhs.d);
}

Rational Rational::operator / (const Rational& rhs) const {
    return Rational(n * rhs.d, d * rhs.n);
}

Rational::~Rational() {
    n = 0; d = 1;
}


int main() {

    Rational a{ 8 };
    cout << format("a is: {} = {}\n", a.raw_str(), a.str());

    Rational b(35, 15);
    cout << format("b is: {} = {}\n", b.raw_str(), b.str());

    auto c = b;     // copy constructor
    cout << format("c is: {} = {}\n", c.raw_str(), c.str());

    Rational d;     // default constructor
    cout << format("d is: {} = {}\n", d.raw_str(), d.str());

    d = c;          // assignment operator
    cout << format("d is: {} = {}\n", d.raw_str(), d.str());

    auto& e = d;    // reference
    d = e;          // assignment to self!
    cout << format("e is: {} = {}\n", e.raw_str(), e.str());
    cout << format("d is: {} = {}\n", d.raw_str(), d.str());

    cout << '\n';
    cout << format("a + b = {}\n", (a + b).str());
    cout << format("a - b = {}\n", (a - b).str());
    cout << format("a * b = {}\n", (a * b).str());
    cout << format("a / b = {}\n", (a / b).str());

}