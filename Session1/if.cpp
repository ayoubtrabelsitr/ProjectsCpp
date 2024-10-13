
#include <format>
#include <iostream>

using std::format;
using std::cout;


int main() {
    /*
    int x{ 7 };
    int* ip = &x;
    const int& y = x;
    cout << format("The value of x is {}\n", x);
    cout << format("The value of *ip is {}\n", *ip);
    cout << format("The value of y is {}\n", y);

    int z{ 73 };
    ip = &z;
    cout << format("The value of x is {}\n", x);
    cout << format("The value of *ip is {}\n", *ip);
    cout << format("The value of y is {}\n", y);
    auto a = 40;
    auto b = 24;
    auto comp = a > b ? "yes" : "no";
    cout << format("answer is {}\n", comp);
    */

    int array[]{ 0,1,2,3,4 };
    int i{ 0 };
    const char string[]{"string"};
    /*for (auto* p = string; *p; i++) {
        cout << format("char is {}\n",*p);
    }
    */
    for (const auto& e : string)
    {
        if (e == 0) break;
        cout << format("cahr is {}\n", e);
    }
    
    }