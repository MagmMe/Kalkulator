//
//  main.cpp
//  Kalkulator
//
//  Created by Marcin Magiera on 28/07/2020.
//  Copyright © 2020 Magme Agency. All rights reserved.
//

#include <iostream>
#include <ostream>
#include <cmath>
using namespace std;

int main()
{
double a, b, wynik;
int dzialanie;

cout << "Wybierz dzialanie :" << endl << "1. Dodawanie" << endl
<< "2. Odejmowanie" << endl
<< "3. Mnozenie" << endl << "4. Dzielenie" << endl << "5. pierwiastkowanie"
<< endl << "6. potegowanie" << endl << "7. pole kola" << endl << endl
<< "Wybierz inna liczbe aby wyjsc"
<< endl << endl;
cin >> dzialanie;

switch (dzialanie){
case 1:
cout << endl << "Podaj skladniki :" << endl;
cin >> a >> b;
wynik = a + b;
break;
case 2:
cout << endl << "Podaj odjemna i odjemnik :" << endl;
cin >> a >> b;
wynik = a - b;
break;
case 3:
cout << endl << "Podaj czynniki :" << endl;
cin >> a >> b;
wynik = a * b;
break;
case 4:
cout << endl << "Podaj dzielna i dzielnik :" << endl;
cin >> a >> b;
wynik = a / b;
break;
case 5:
cout << endl << "podaj liczbe do spierwiastkowania :" << endl;
cin >> a;
cout <<"podaj stopien pierwiastka :";
cin >> b;
wynik = pow(a,(1/b));
break;
case 6:
cout << endl << "podaj liczbe do spotegowania :";
cin >> a;
cout << endl << "do ktorej potegi ma byc podniesiona liczba:";
cin >> b;
wynik = pow(a,b);
break;
case 7:
cout << endl << "podaj promien kola :";
cin >> a;
wynik = a * a *M_PI;
break;
default :
cout << endl << "Koniec programu." << endl;
wynik = 0;
}

cout << endl << "Wynik wynosi " << wynik << endl << endl;

return 0;
}
