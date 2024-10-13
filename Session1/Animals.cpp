
#include<format>
#include<iostream>
#include <string>
using std::format;
using std::cout;
using std::string;

//-- interface --
class Animal {
	string type{};
	string name{};
	string sound{};
public :
	Animal();
	Animal(const string& type, const string& name, const string& sound);
	//~Animal();//destructor
	//void print() const;
};
Animal::Animal() {
	cout << "Default construcur \n";
}
Animal::Animal(const string& type, const string& name, const string& sound)
	: type(type), name(name), sound(sound)
{
	cout << "Constructor with arguments\n";
}
int main()
{
	Animal dog{};
	Animal b("goat", "bob", "bah");
}