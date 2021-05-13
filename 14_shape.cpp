
// Write a program in c++ to demonstrate the constructor overloading, assume desired parameters.

#include <iostream>
#include <cmath>
using namespace std;

class ThreeDimensionalShape
{
protected:
    virtual float surfaceArea(){};
    virtual float volume(){};
};

class Sphere : virtual public ThreeDimensionalShape
{
private:
    float radius;

public:
    Sphere(float r)
    {
        radius = r;
    };
    float surfaceArea() override
    {
        return 4 * M_PI * radius * radius;
    }
    float volume() override
    {
        return (4.0 / 3.0) * M_PI * radius * radius * radius;
    }
};

int main()
{
    float r;
    cout << "Enter Radius of sphere: ";
    cin >> r;
    Sphere s = Sphere(r);
    cout << "Surface area is: " << s.surfaceArea() << endl;
    cout << "Volume is: " << s.volume() << endl;
    return 0;
}