
#include<iostream>
#include<format>
#include<string>


using std::cout;
using std::format;
using std::string;

template <typename T>
T factorial(T n) {
	auto result = n;
	while (n > 1)
	{
		result *= --n;
	}
	return result;
}

int main()
{
	int x{5};
	long long unsigned int y{6};
	long double z { 8 };
	
	cout << format("x! is {}\n", factorial(x));
	cout << format("y! is {}\n", factorial(y));
	cout << format("y! is {}\n", factorial(z));
} 