#include <iostream>

using namespace std;

//function defined with default arguments
class Adder
{
private:
    int a;
    int b;
    int c;
    int d;

public:
    Adder(int x, int y, int z = 0, int w = 0)
    {
        a = x;
        b = y;
        c = z;
        d = w;
    }
    int add() { return (a + b + c + d); }
};

int main()
{
    // With all four arguments
    auto a1 = Adder(1, 2, 3, 4);
    cout << "Sum with 4 arguments 1,2,3,4 => " << a1.add() << endl;
    // With only two arguments
    auto a2 = Adder(1, 2);
    cout << "Sum with 4 arguments 1,2 => " << a2.add() << endl;
}