#include <iostream>
#include<cstring>
#include <cstdlib>

using namespace std;

int main()
{
    int x;
    char losowanie;

    x = (rand() % 9) + 1; //losuje liczby z zakresu od 1 do 10

    cout << x << endl;

    cout << "Czy losowac ponownie [ t / n ]: ";
    cin >> losowanie;

    if (losowanie == 't')
            main();

    return 0;
}
