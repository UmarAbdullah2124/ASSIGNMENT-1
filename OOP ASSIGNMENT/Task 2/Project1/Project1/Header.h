#include<iostream>
using namespace std;

class MyChar {
private:
    char myChar;

public:
    MyChar(const char c = '\0');

    void setMyChar(char c);
    char getMyChar() ;

    void ToUpperCase();
    void ToLowerCase();
};