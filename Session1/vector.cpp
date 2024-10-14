/*--Applications of vectors--*/

#include<format>
#include<iostream>
#include<string>
#include<vector>

using std::format;
using std::cout;
using std::string;
using std::vector;


vector <int> numbers{};
bool flag = true;

static void printVec(vector <int> x) {
	for (auto it = x.begin(); it < x.end(); ++it)
	{
		if (it == x.end() - 1)cout << format(" {} |", *it);
		else if (it == x.begin())cout << format("| {} -", *it);
		else cout << format(" {} -", *it);
	}
}

int main()
{
	int size{0};
	while (flag) {

		cout << format("Give me the table size : ");
		std::cin >> size;
		cout << "\n";

		if (0 < size && size < 10)
			flag = false;

	}
	int input{ 0 };
	for (auto i{ 0 }; i < size; i++)
	{
		cout << format("Give me the number {} \n", i);
		std::cin >> input;
		numbers.push_back(input);
	}

	printVec(numbers);
	cout << format(" the first number is {}\n", numbers.front());
	cout << format(" the last number is {}\n", numbers.back());

	/*for (auto it = numbers.begin(); it < numbers.end(); ++it)
	{
		//vector
	}
*/
	for (const auto& i : numbers)
	{
		//cout << i;
	}
	//numbers.insert(numbers.begin(), 4);
	//cout << format("elemnt is {}", numbers.at(3));
	//numbers.erase(numbers.begin() + 5);

	//numbers.push_back(45);
	//numbers.back() = 1;
	//numbers.front() = 4;


	cout << format("{:*<10}\n", 5); //5 * ********
	cout << format("{:0>10}\n", 6); //0000000006
	cout << format("{:^10}\n", 8);  //		8
	cout << format("{:_^10}\n", 9); //____9_____
		

		

}
/*string:
chaine.insert (position,value );
chiane.erase(position);
chaine.find(value); // find first value in string
chaine.rfind(value); // find last value in string






*/