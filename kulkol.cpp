#include <iostream>

using namespace std;

bool pusta(string kolejka)
{
    bool czypusta = true;
    for (int i = 0; i < kolejka.length(); i++)
    {
        if (kolejka[i] == 'X')
        {
            czypusta = false;
        }
    }
    return czypusta;
}

int main()
{
    string kolejka;
    cin >> kolejka;
    int licznik=0;

    while (!pusta(kolejka))
    {
        for (int i = 0; i < kolejka.length(); i++)
        {
            if (i + 1 == kolejka.length())
            {
                kolejka[i] = '.';
            }
            else
            {
                if (kolejka[i] == 'X')
                {
                    if (kolejka[i + 1] == '.')
                    {
                        kolejka[i] = '.';
                        kolejka[i+1] = 'X';
                        i++;
                    }
                }
            }
        }
        licznik++;
        cout << kolejka << endl;
    }
    cout << licznik;
}