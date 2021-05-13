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
    Complex operator*(const Complex &c2)
    {
        Complex res;
        res.real = ((real) * (c2.real)) - ((img) * (c2.img)); //multiplication for real part
        res.img = ((real) * (c2.img)) + ((real) * (c2.img));  //multiplication for imaginary part
        return res;                                           //the result after multiplication
    }
    Complex operator++(int i)
    {
        Complex res;
        res.real = ++real; //increment for real part
        res.img = ++img;   //increment for imaginary part
        return res;        //the result after increment
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
    Complex incrementn1 = n1++;
    Complex incrementn2 = n2++;
    cout << "Incrementing N1: ";
    incrementn1.display();
    cout << "Incrementing N2: ";
    incrementn2.display();

    cout << "Multiplying N1 and N2: ";
    Complex n1n2 = n1 * n2;
    n1n2.display();
    cout << "Adding N1 and N2: ";
    Complex n1pn2 = n1 + n2;
    n1pn2.display();
    cout << "Subtracting N1 and N2: ";
    Complex n1mn2 = n1 - n2;
    n1mn2.display();
}