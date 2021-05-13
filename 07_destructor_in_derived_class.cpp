//eg of destructor in single inheritance
#include <iostream>

using namespace std;

class Base
{
public:
    ~Base()
    {
        cout << "base class destructor" << endl;
    }
};

class Derived : public Base
{
public:
    ~Derived()
    {
        cout << "derived class destructor" << endl;
    }
};
int main()
{
    Derived d;
    return 0;
}