#include "Money.h"
#include <Windows.h>

Money makeMoney(unsigned int nominal, unsigned int number)
{
	Money bb;
	if (!bb.Init(nominal, number))
	{
		cout << "Data entry error" << endl;
		cout << "________________________________________" << endl;
	}
	return bb;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x, y;
	Money b;
	b.Init(10, 8);
	b.Display();
	cout << "Sum: " << b.summa() << endl;
	cout << "________________________________________" << endl;
	Money b2;
	b2.Read();
	b2.Display();
	cout << "Sum: " << b2.summa() << endl;
	cout << "________________________________________" << endl;
	Money b3;
	cout << "Enter the denomination of the bill: "; cin >> x;
	cout << "Enter the number of bills: "; cin >> y;
	b3 = makeMoney(x, y);
	b3.Display();
	b3.SetFirst(2);
	b3.SetSecond(3);
	cout << "Enter the denomination of the bill: " << b3.GetFirst() << endl;
	cout << "Enter the number of bills: " << b3.GetSecond() << endl;
	b3.Display();
	cout << "Enter the number of bills: " << b3.summa() << endl;

	return 0;
}