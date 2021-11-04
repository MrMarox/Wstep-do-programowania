#include <vector>
#include <iostream>

using namespace std;

void wypisz(int x)
{
    cout << x << endl;
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
    for (int i = 0; i < tab.size(); i++)
    {
        if (!czyNalezy(tab, tab2[i]))
        {
            return false;
        }
    }return true;
}

int main()
{
    int a, b, element;
    a = 4;
    b = 3;
    element = 5;
    
    vector<int>tab = { 1,2,3,4 };
    vector<int>tab2 = { 4,3,2,1 };
    
    wypisz(suma(a, b));
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


