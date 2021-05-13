// Write a program in c++ to demonstrate the public, private, protected parameters/fields.

#include <iostream>

using namespace std;

class Parent
{
private:
    string priv = "PRIVATE FIELD";

public:
    string pub = "PUBLIC FIELD";

    // This method can use all the fields of this class.
    void printAllFields()
    {
        cout << priv << endl
             << pub << endl
             << prot << endl
             << endl;
    }

protected:
    string prot = "PROTECTED FIELD";
};

class ChildProt : protected Parent
{
public:
    void printProtected()
    {
        // cout << priv; //Not accessible
        cout << prot << endl
             << endl;
    }
};

class ChildPriv : private Parent
{
public:
    void printPrivate()
    {
        cout << "`priv` is Not Accessible even if we use the private modifier in front of the parent class since the member `priv` is private" << endl;
    }
};

class ChildPub : public Parent
{
};

int main()
{
    Parent p1;
    ChildProt sprot1;
    ChildPriv spriv1;
    ChildPub spub1;
    p1.printAllFields();
    sprot1.printProtected();
    spriv1.printPrivate();
}