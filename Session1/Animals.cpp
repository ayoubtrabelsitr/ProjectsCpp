
#include<format>
#include<iostream>
#include <string>
using std::format;
using std::cout;
using std::string;


const string none{ "None" };
//-- interface --
class Animal {
	string type{};
	string name{};
	string sound{};
public :
	Animal();
	Animal(const string& type, const string& name, const string& sound);
	~Animal();//destructor
	//void print() const;
};

//implementation

Animal::Animal():type(none),name(none), sound(none) {
	cout << "Default construcur \n";
}

Animal::Animal(const string& type, const string& name, const string& sound)
	: type(type), name(name), sound(sound)
{
	cout << "Constructor with arguments\n";
}

Animal::~Animal() {

	cout << format("Hello Deconstructor \n");
}

int main()
{
	Animal dog{};
	Animal b("goat", "bob", "bah");

	cout << format("End of Main \n");
}