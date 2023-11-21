#include "Header.h"

void MyNum::setnum(int n)
{
    num = n;
}

int MyNum::getnum()
{
    return num;
}

void MyNum::numPositive()
{
    if (num < 0) {
        num = -num;
        cout << "The Positive of your number will be: " << num << endl;
    }
    else if (num > 0)
    {
        cout << "Your number is already Positive!!!" << endl;
    }
    else
    {
        cout << "Your number is zero." << endl;
    }
}

void MyNum::numNegative()
{
    if (num > 0) {
        num = -num;
        cout << "The Negative of your number will be: " << num << endl;
    }
    else if (num < 0)
    {
        cout << "Your number is already Negative!!!" << endl;
    }
    else
    {
        cout << "Your number is zero." << endl;
    }
}


MyNum::MyNum(int x)
{
    num = x;
}
