
#include "pch.h"
#include <iostream>
#include <vector>
#include <map>
#include <cstdlib>
#include <string>
#include <ctime>
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
void wypisz(map<int, int>m)
{
	for (auto item : m)
	{
		cout << item.first << " ";
		cout << item.second << " razy" << endl;
	}
}
int min(vector<int>tab)
{
	int wynik = tab[0];
	for (int i = 0; i < tab.size(); i++)
	{
		if (wynik > tab[i])
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
bool czynalezyklucz(map<int, int>m, int klucz)
{
	for (auto item : m)
	{
		if (item.first == klucz)
		{
			return true;
		}
	}return false;
}

bool czyzawiera(vector<int>tab, vector<int>tab2)
{
	for (int i = 0; i < tab.size(); i++)
	{
		if (!czynalezy(tab2, tab[i]))
		{
			return false;
		}
	}return true;
}

vector<int> unikalnosc(vector<int>tab)
{
	vector<int>wynik;
	for (int i = 0; i < tab.size(); i++)
	{
		if (!czynalezy(wynik, tab[i]))
		{
			wynik.push_back(tab[i]);
		}
	}return wynik;
}
map<int, int> czestosc(vector<int>tab)
{
	map<int, int>wynik;
	for (int i = 0; i < tab.size(); i++)
	{
		if (!czynalezyklucz(wynik, tab[i]))
		{
			wynik.insert({ tab[i], 1 });
		}
		else
		{
			wynik[tab[i]]++;
		}
	}return wynik;
}
bool palindorm(vector<int>tab)
{
	int koniec = tab.size() - 1;
	for (int i = 0; i < tab.size() / 2; i++)
	{
		if (tab[i] != tab[koniec - i])
		{
			return false;
		}
	}return true;
}

vector<int> podzielna(vector<int>tab, int dzielnik, int reszta = 0)
{
	vector<int>wynik;
	vector<int> u = unikalnosc(tab);
	for (int i = 0; i < u.size(); i++)
	{
		if (u[i] % dzielnik == reszta)
		{
			wynik.push_back(u[i]);
		}
	}return wynik;
}

vector<int> losowanie(int start, int ile, int liczba)
{
	srand(time(NULL));
	vector<int>wynik;
	for (int i = 0; i < liczba; i++)
	{
		wynik.push_back((rand() % ile) + start);
	}return wynik;
}







int main()
{
	int element = 5;
	int x;
	int dzielnik = 3;
	vector<int>tab = { 3,3,3,3,5,9,7,2,4,4,4,4,4 };
	vector<int>tab2 = { 6,6,3,2 };
	cout << "minimum" << endl;
	wypisz(min(tab));
	cout << "czestosc" << endl;
	wypisz(czestosc(tab));
	int los = (rand() % 99) + 1;
	cout << "los" << endl;
	wypisz(los);
	cout << "losowanie" << endl;
	wypisz(losowanie(1, 99, 20));
	cout << "podzielna" << endl;
	wypisz(podzielna(tab, dzielnik));


	/*
	cout << "losowy wektor w dlugosci podanej przez uzytkownika a nastepnie wyciagnij z niego liczby podzielne przez 7" << endl;

	int pier, ile, dlug;
	
	cout << "podaj pierwsza liczbe ciagu" << endl;
	cin >> pier;
	cout << "podaj ile liczb w przedziale losowym" << endl;
	cin >> ile;
	cout << "ile dlugosc ciagu" << endl;
	cin >> dlug;
	vector <int>losowy = losowanie(pier, ile, dlug);
	cout << "losowanie" << endl;
	
	wypisz(podzielna(losowy, 7));
	*/

	int n;
	cout << "podaj liczbe ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "*";
		for (int j = 0; j < i; j++)
		{
			cout << "**";
		}cout << endl;
	}
