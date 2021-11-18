

#include <vector>
#include <iostream>
using namespace std; 

void wypisz(int x)
{
	cout << x << endl;
}

void wypisz(vector<int>tab)
{
	for (int i = 0; i < tab.size(); i++)
	{
		cout << tab[i] << " ";
	}cout << endl;
}

int suma(int x, int y)
{
	return x + y;
}

int min(vector<int>tab)
{
	int wynik = tab[0];
	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i] < wynik)
		{
			wynik = tab[i];
		}
	}return wynik;
}

bool czynalezy(vector<int>tab, int element)
{
	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i] == element)
		{
			return true;
		}
	}return false;
}

bool czyzawiera(vector<int>tab, vector<int>tab2)
{
	for (int i = 0; i < tab.size(); i++)
	{
		if (!czynalezy(tab, tab2[i]))
		{
			return false;
		}
	}return true;
}


int main()
{
	int a, b, element;
	a = 5;
	b = 5;
	element = 3;
	vector<int>tab = { 1,2,3 };
	vector<int>tab2 = { 3,2,1 };

	wypisz(tab);
	wypisz(suma(a, b));
	wypisz(min(tab));

	if (czynalezy(tab, element) == true)
	{
		cout << "nalezy" << endl;
	}
	else
	{
		cout << "nie nalezy" << endl;
	}

	if (czyzawiera(tab,tab2)==true)
	{
		cout << "zawiera" << endl;
	}
	else
	{
		cout << "nie zawiera" << endl;
	}
}

