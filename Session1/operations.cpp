
#include <iostream>
#include <format>

using std::format;
using std::cout;
using std::cin;


long long factorial(int  number)
{
	long long res{1 };

	for (int i{ number }; i > 0; i--)
	{
		res *= long long (i);
	}
	return res;
}
int main()
{
	while (true)
	{
		long long number{ 0 };
		cout << format(" Give me a number \n");
		cin >> number;
		cout << format(" factorial of {} is {} \n", number, factorial(number));
	}
}