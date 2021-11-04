#include <vector>
#include <iostream>

using namespace std;

void wypisz(int a)
{
    cout << a <<endl;
}
int suma(int x, int y)
{
    return x + y;
}

void wypisz(vector<int>tab)
{
    for (int i = 0; i < tab.size(); i++)
    {
        cout << tab[i] << " ";
    }
    cout << endl;
}

bool czyNalezy(vector<int>tab, int element)
{
    for (int i = 0; i < tab.size(); i++)
    {
        if (tab[i] == element)
        {
            return true;
        }
    }return false;
}

bool czyZawiera(vector<int>tab, vector<int>tab2)
{
    for (int i = 0; tab.size(); i++)
    {
        if (!czyNalezy(tab, tab2[i]))
        {
            return false;
        }
    }return true;
}

int main()
{
    int a, b, c, element;
    a = 4;
    b = 3;
    c = 6;
    element = 3;
    wypisz(suma(a, b));

    vector<int>tab = { 1,4,5,6 };
    vector<int>tab2 = { 3,5,4,2 };

    wypisz(tab);

    if (czyNalezy(tab, element) == true)
    {
        cout << "nalezy" << endl;
    }
    else
    {
        cout << "nie nalezy" << endl;
    }

    if (czyZawiera(tab, tab2) == true)
    {
        cout << "zawiera" << endl;
    }
    else
    {
        cout << "nie zawiera" << endl;
    }


}


