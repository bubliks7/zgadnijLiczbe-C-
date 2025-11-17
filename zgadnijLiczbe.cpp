#include <iostream>
using namespace std;

void ZgadnijLiczbe()
{
    cout << "Witaj w prostym programie w ktorym musisz zgadnac liczbe od 1 do 100" << endl;
    while (true)
    {
        int liczba = rand() % 100 + 1;
        int wyborUzytkownika;
        cout << "Wpisz liczbe od 1 do 100: ";
        cin >> wyborUzytkownika;

        if (wyborUzytkownika < liczba)
        {
            cout << "Twoja liczba jest za mala!" << endl;
            continue;
        }
        else if (wyborUzytkownika > liczba)
        {
            cout << "Twoja liczba jest za duza!" << endl;
            continue;
        }
        else
        {
            cout << "Udalo ci się zgadnac liczbe" << endl;
            break;
        }
    }
}
int main()
{
    ZgadnijLiczbe();
    return 0;

};


