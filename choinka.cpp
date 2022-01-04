#include <iostream>
#include <vector>
#include<map>
#include<ctime>
using namespace std;




int main()
{

    int g;
    cout << "podaj liczbe ";
    cin >> g;
    for (int i = 0; i <= g; i++)
    {
        for (int j = 1; j <= g - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j < i * 2; j++)
        {
            cout << "*";
        } cout << endl;
    }
  


}
