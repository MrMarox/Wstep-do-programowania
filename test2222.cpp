	#include <iostream>
#include <vector>
#include <map>
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

	vector<int>wynik;
	for (int i = 0; i < liczba; i++)
	{
		wynik.push_back((rand() % ile) + start);
	}return wynik;
}

vector<int> domy(vector<int>tab) {
	vector<int>wynik;
	for (int i = 0; i < tab.size(); i++) {
		int a = tab[i];
		int liczba = a * tab.size();
		int b = tab[i];
		for (int j = 0; j < tab.size(); j++) {
			if (tab[i] != tab[j]) {
				b = b + tab[j];
			}
		}
		wynik.push_back(abs(b - liczba));
	}
	return wynik;
}


vector<int>delta(double a, double b, double c)
{
	vector<int>wynik;
	double delta = (b * b) - 4 * a * c;
	if (delta == 0)
	{
		double x1 = (b * -1) / (2 * a);
		wynik.push_back(x1);
	}
	else if (delta > 0)
	{
		double pier = sqrt(delta);
		double x1 = (b * -1)- pier / (2 * a);
		double x2 = (b * -1) + pier / (2 * a);
		wynik.push_back(x1);
		wynik.push_back(x2);
		
	}return wynik;
}

int Abs(int liczba)
{
	if (liczba < 0)
		return liczba * -1;
	
	return liczba;
}

int Xxxx(vector<int> tab, int indexDomu)
{
	int wynik = 0;
	for (int i = 0; i < tab.size(); i++)
	{
		wynik += Abs(tab[i] - tab[indexDomu]);
	}

	return wynik;
}

int suma(vector<int>tab)
{
	int suma = 0;
	for (int i = 0; i < tab.size(); i++)
	{
		suma += tab[i];
	}return suma;
}

int silnia(int n) {
	int wynik = 1;
	for (int i = 1; i < n +1; i++)
	{
		wynik = i * wynik;
	}return wynik;
}



int main()
{
	srand(time(NULL));

	wypisz(losowanie(5, 2, 50));
	wypisz(silnia(5));
	

}
