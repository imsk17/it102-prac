
// Write a program in c++ to demonstrate the constructor overloading, assume desired parameters.

#include <iostream>
using namespace std;
class Demo
{
private:
    int x, y;

public:
    Demo() //constructor 1 with no arguments
    {
        x = y = 0;
    }
    Demo(int a) //constructor 2 with one argument
    {
        x = y = a;
    }
    Demo(int a, int b) //constructor 3 with two argument
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "x = " << x << " and "
             << "y = " << y << endl;
    }
};

int main()
{
    Demo d1;
    Demo d2(10);
    Demo d3(10, 20);
    d1.display();
    d2.display();
    d3.display();
    return 0;
}