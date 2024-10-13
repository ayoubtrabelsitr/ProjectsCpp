
#include<format>
#include<iostream>

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
	Animal(const Animal&);//Copy constructor
	~Animal();//destructor
};//aaaaaa