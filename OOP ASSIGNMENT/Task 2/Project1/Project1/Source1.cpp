#include "Header.h"

int main()
{
	MyChar obj1;
	char ch;


	cout << "Enter character: ";
	cin >> ch;

	obj1 = ch;

	cout << "Your entered character: " << obj1.getMyChar() << endl;
	
	obj1.ToUpperCase();

	cout << "Upper Case: " << obj1.getMyChar() << endl;
	
	obj1.ToLowerCase();

	cout << "Lower Case: " << obj1.getMyChar() << endl;


	int size;
	cout << "Enter how many Characters you want to enter: ";
	cin >> size;

	MyChar* cha = new MyChar[size];

	for (int i = 0; i < size; i++)
	{
		cout << "enter " << i + 1 << " Character: ";
		cin >> ch;

		cha[i].setMyChar(ch);
	}

	cout << "Characters : ";

	for (int i = 0; i < size; i++)
	{
		cout << cha[i].getMyChar() << " ";
	}

	cout << endl;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{

			if (cha[j].getMyChar() > cha[j + 1].getMyChar())
			{
				char k = cha[j].getMyChar();


				cha[j].setMyChar(cha[j + 1].getMyChar());

				cha[j + 1].setMyChar(k);
			}
		}
	}

	cout << "The Characters after sorting are : ";

	for (int i = 0; i < size; i++)
	{
		cout << cha[i].getMyChar() << " ";
	}
	cout << endl << endl;

	system("pause");
	return 0;
}