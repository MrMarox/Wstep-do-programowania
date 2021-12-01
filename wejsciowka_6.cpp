#include <vector>
#include <iostream>
using namespace std;

void wypisz(int x) 
{
	cout << x << endl;
}
void wypisz(vector<int>tab)
{
	for(int i = 0; i < tab.size();i++)
	{
		cout << tab[i] << " ";

	}cout << endl;
}

int min(vector<int>tab) {
	int wynik = tab[0];
	for (int i = 0; i < tab.size(); i++)
	{
		if (wynik < tab[i])
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
		if (!czynalezy(tab, tab[i])) {
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

vector <vector<int>> czestosc(vector<int>tab) {
	vector<vector<int>>wynik;
	vector<int>u = unikalnosc(tab);
	vector<int>c;
	for (int i = 0; i < u.size(); i++) {
		int element = u[i];
		int licznik = 0;
		for (int j = 0; j < tab.size(); j++)
		{
			if (element == tab[j]) 
			{
				licznik++;
			}
		}c.push_back(licznik);
	}
	wynik.push_back(u);
	wynik.push_back(c);
	return wynik;
}

void wypisz(vector<vector<int>>tab)
{
	for (int j = 0; j < tab[1].size(); j++)
	{
		for (int i = 0; i < tab.size(); i++)
		{
			cout << tab[i][j] << " ";
			
		}cout << endl;
	}
}
int main()
{
	int element = 2;
	vector<int>tab = { 1,1,1,3,4,5 };
	vector<int>tab2 = { 1,3,4,5 };
	
	wypisz(tab);
	wypisz(unikalnosc(tab));
	wypisz(min(tab));

	if (czynalezy(tab, element) == true) {
		cout << "nalezy" << endl;
	}
	else {
		cout << "nie nalezy" << endl;
	}

	if (czyzawiera(tab, tab2) == true) {
		cout << "zawiera" << endl;
	}
	else {
		cout << "nie zawiera" << endl;
	}
	wypisz(czestosc(tab));
}
