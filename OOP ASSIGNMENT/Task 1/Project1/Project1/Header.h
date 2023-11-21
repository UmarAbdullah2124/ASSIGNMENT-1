#include<iostream>
using namespace std;

class MyNum {
private:
    int num;

public:
    void setnum(int);
    int getnum();
    void numPositive();
    void numNegative();
    MyNum(int x = 0);
};