#include <iostream>
using namespace std;
class Complex
{
    int real, img;

public:
    Complex()
    {
        //default constructor to initialize complex number to 0+0i
        real = 0;
        img = 0;
    }
    Complex(int r, int i)
    {
        //parameterized constructor to initialize complex number.
        real = r;
        img = i;
    }
    Complex operator+(const Complex &c2)
    {
        Complex res;
        res.real = real + c2.real; //addition for real part
        res.img = img + c2.img;    //addition for imaginary part
        return res;                //the result after addition
    }
    Complex operator-(const Complex &c2)
    {
        Complex res;
        res.real = real - c2.real; //subtraction for real part
        res.img = img - c2.img;    //subtraction for imaginary part
        return res;                //the result after addition
    }
    void set()
    {
        cout << "Enter Real part: ";
        cin >> real;
        cout << "Enter Imaginary Part: ";
        cin >> img;
    };
    void get()
    {
        cout << "The complex number is: " << real << "+" << img << "i" << endl;
    };
    void display()
    {
        if (img < 0)
            if (img == -1)
                cout << "The complex number is: " << real << "-i" << endl;
            else
                cout << "The complex number is: " << real << img << "i" << endl;
        else if (img == 1)
            cout << "The complex number is: " << real << " + i" << endl;
        else
            cout << "The complex number is: " << real << " + " << img << "i" << endl;
    };
};
int main()
{
    Complex n1(3, 2), n2(4, -3);
    Complex result = n1 + n2;
    result.display();
}