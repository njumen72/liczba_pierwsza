#include <iostream>

using namespace std;

int main()
{
	int x, i = 2;

	cout << "Wpisz liczbe: ";
	cin >> x;
	cout << endl << x;

	if (x == i)
		cout << " jest liczba pierwsza" << endl;
	else {
		do
		{
			if ((x % i == 0) || (x <= 1))
			{
				cout << " nie";
				break;
			}
			else
				i++;
		} while (x > i);

		cout << " jest liczba pierwsza" << endl;
	}

	cout << endl;
	system("pause");
	return 0;
}
//by njumen72