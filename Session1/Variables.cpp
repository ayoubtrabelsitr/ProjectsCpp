
#include <format>
#include <iostream>
#include <vector>

using std::cout;
using std::format;



using points_t = uint32_t;
using rank_t = uint64_t;

struct score {

	points_t p{};
	rank_t r{};
};

const size_t byte{ 8 };
static int func()
{
	static int i{ 7 };
	return i++;

}

/*
int main()
{
	/*
	float f{};
	double df{};
	long double ldf{};
	cout << format("size of float is {} bits\n", sizeof(f) * byte);
	cout << format("size of double is {} bits\n", sizeof(df) * byte);
	cout << format("size of long double is {} bits\n", sizeof(ldf)* byte);
	const char chaine[]{ "ayoub" };
	for (const auto& e : chaine) {
		if (e == 0) break;
		cout << format("char is {}\n", e);
	}
	int array[]{ 1, 2, 3, 4, 5 };

	for (const auto& e : array) {
		cout << format("element is {}\n", e);
	}
	
	std::vector<float> tab{ 0,1,2,3,4 };
	for (auto it = tab.begin(); it != tab.end(); it++)
	{
	
		cout << format("case is {}\n",  *it);
	}

	cout << format("func returns {}\n " ,func());
	cout << format("func returns {}\n ", func());
	cout << format("func returns {}\n ", func());
	score s{ 5,1 };
	cout << format("score s had {} points and a rank of {}\n ", s.p, s.r);
}
*/