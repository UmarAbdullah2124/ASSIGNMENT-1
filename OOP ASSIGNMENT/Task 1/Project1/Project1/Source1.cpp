#include <iostream>
#include "Header.h"

int main()
{
    int num;
    int num1;

    cout << "Enter an integer: " << endl;
    cin >> num;

    MyNum obj1(num); // Using the parameterized constructor
    cout << "Your number is: " << obj1.getnum() << endl;
    obj1.numPositive();
    obj1.numNegative();

    cout << "Enter the number of objects you want to make: " << endl;
    cin >> num1;

    MyNum* arr = new MyNum[num1];
    for (int i = 0; i < num1; i++)
    {
        cout << "Enter a number for object " << i + 1 << ": " << endl;
        cin >> num;
        arr[i].setnum(num);
    }

    for (int i = 0; i < num1; i++)
    {
        cout << "The number you entered is: " << arr[i].getnum() << endl;
        arr[i].numPositive();
        arr[i].numNegative();
    }

    delete[] arr;
    return 0;
}
