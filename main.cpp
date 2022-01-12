#include <iostream>

using namespace std;

int main()
{
    int liczba, i = 2;
    cout << "Wpisz liczbe: ";
    cin >> liczba;
    bool pierwszaFlag = true;

    while (liczba > i)
    {
        if ((liczba % i == 0) || (liczba <= 1))
        {
            pierwszaFlag = false;
            break;
        }

        i++;
    }

    if (pierwszaFlag && liczba > 1)
        cout << liczba << " jest liczba pierwsza" << endl;
    else
        cout << liczba << " nie jest liczba pierwsza!" << endl;

    cout << endl;
    system ("pause");
    return 0;
}

