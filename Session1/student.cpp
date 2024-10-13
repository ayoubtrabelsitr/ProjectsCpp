//
//#include <iostream>
//#include <format>
//#include<vector>
//
//using std::cout;
//using std::format;
//using std::vector;
//
//class student {
//	std::string name{};
//	int age{ 0 };
//	vector  <int> notes ;
//
//public :
//	student(const char* na, int a, vector<int> n) :
//		name(na), age(a), notes(n){}
//	student();
//	void setName(const char* name);
//	void setAge(int age);
//	void setNotes(vector <int > notes);
//	std::string getName() {
//		return this->name;
//
//	}	
//	int getAge() {
//		return this->age;
//
//	}	
//	vector <int > getNotes() {
//		return this->notes ;
//
//	}
//
//};
//void student::setName(const char* name) {
//	this->name = name;
//}
//void student::setAge(int age) {
//	this->age = age;
//}
//void student::setNotes(vector <int > notes)
//{
//	this->notes = notes;
//
//}
//
//int main()
//{
//	student trabelsi;
//	trabelsi.setName("trabelsi");
//	int i{ 2 };
//	vector <int> notes;
//	notes.insert(notes.end(), i *= 2);
//	student* ayoub = new student("ayoub",20, notes);
//			/*ayoub->setAge(20);
//			ayoub->setName("trabelsi4");
//	
//			ayoub->setNotes(notes);*/	
//	cout << format("name is {}, age is {}, notes \n ", ayoub->getName(), ayoub->getAge());
//	for (const int& note : ayoub->getNotes()){
//		cout << format("{} ,",note ); 
//	}
//}