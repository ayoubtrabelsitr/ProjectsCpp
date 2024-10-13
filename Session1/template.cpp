
#include<iostream>
#include<format>
#include<string>


using std::cout;
using std::format;
using std::string;

template <typename T>
T maxOf(T a, T b)
{
	return a > b ? a : b;
}

int main()
{
	int x{25};
	int y{26};
	auto z = maxOf(x, y);
	cout << format("max is {}\n", z);

}