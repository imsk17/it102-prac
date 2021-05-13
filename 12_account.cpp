
// Write a program in c++ to demonstrate the constructor overloading, assume desired parameters.

#include <iostream>
using namespace std;

class Transactor
{
protected:
    virtual void getBalance(){};
    virtual void withdrawMoney(){};
    virtual void computeInterest(){};
};

class Account : virtual public Transactor
{
private:
    int balance;

public:
    Account(int ba)
    {
        balance = ba;
    };
    void getBalance() override
    {
        cout << "Your balance is :" << balance << endl;
    }
    void withdrawMoney() override
    {
        int amt;
        cout << "Enter the amount to withdraw (+ INTEGER ONLY)" << endl;
        cin >> amt;
        if (amt > balance)
        {
            cout << "Sorry, You dont have this much money in your account." << endl;
        }
        else
        {
            balance = balance - amt;
            cout << "Withdrawing amount: " << amt << ".\nYour balance is " << balance << endl;
        }
    }
    void computeInterest() override
    {
        int timeperiod;
        cout << "Enter Time Period (in Years)" << endl;
        cin >> timeperiod;
        cout << "Interest Amt: " << 0.06 * balance * timeperiod << endl;
    }
};

int main()
{
    Account myAcc = Account(150000);
    myAcc.getBalance();
    myAcc.computeInterest();

    myAcc.withdrawMoney();
    myAcc.getBalance();
    return 0;
}