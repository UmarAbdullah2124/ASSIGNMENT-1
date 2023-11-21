#include "Header.h"

void MyChar::setMyChar(const char c)
{
    myChar = c;
}

MyChar::MyChar( char c)
{
    myChar = c;
}


char MyChar::getMyChar() 
{
    return myChar;
}


void MyChar::ToUpperCase()
{
    if (myChar > 96 && myChar < 123)
    {
        myChar -= 32;
    }
}
void MyChar::ToLowerCase()
{
    if (myChar > 64 && myChar < 91)
    {
        myChar += 32;
    }
}
