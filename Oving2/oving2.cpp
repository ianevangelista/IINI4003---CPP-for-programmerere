#include <cstdlib>
#include <fstream>
#include <iostream>

using namespace std;
int find_sum(const int *table, int length);

int main()
{
    //Oppgave 1
    int i = 3;
    int j = 5;
    int *p = &i;
    int *q = &j;

    cout << "Adressen til variabelen i er: " << &i << " og har innholdet: " << i << endl;
    cout << "Adressen til variabelen j er: " << &j << " og har innholdet: " << j << endl;
    cout << "Adressen til pekeren p er: " << p << " og har innholdet: " << *p << endl;
    cout << "Adressen til pekeren q er: " << q << " og har innholdet: " << *q << endl;

    *p = 7;      // Adressen som p peker på vil få innholdet med int 7. p peker på adressen til i, så i = 7
    *q += 4;     // Adressen som q peker på vil få innholdet sitt addert med int 4. q peker på adressen til j, så j = 5 + 4 = 9
    *q = *p + 1; // Adressen som q peker på vil være lik innholdet til i + 3 fordi p peker på innholdet til i. q peker på adressen til j, så j = 7 + 1 = 8
    p = q;       // p vil nå peke på q, som vil si at begge peker på adressen til j og innholdet som er lik 8.
    cout << *p << " " << *q << endl;

    //Oppgave 4
    int a = 5;         // Endret ingenting.
    int &b = a;        // &b er en referanse så, og a er eneste som er deklarert fra før av. Derfor er b en referanse på a eller et annen navn på a.
    int *c;            // Endret ingenting.
    c = &b;            // Endret ingeting. c blir lik adressen til referansen b og dermed også a.
    a = b + *c;        // a var aldri en peker så fjerner * fra a. b var heller ikke en peker så * fjernes fra b.
    cout << a << endl; // Printer ut 10.
    b = 2;             // b er en referanse til a allerede, så fjerner & fra b.
    cout << b << endl; // Printer ut 2.
    cout << c << endl; // Printer ut adressen sin, noe som er lik for alle tre.

    //Oppgave 5
    double number;
    double *pointer;
    pointer = &number;
    double &ref = number;
    number = 1; //Alt. 1
    cout << number << endl;
    *pointer = 2; // Alt. 2
    cout << number << endl;
    ref = 3; // Alt. 3
    cout << number << endl;

    //Oppgave 6
    int table[20];

    for (int i = 1; i < 21; i++)
    {
        table[i - 1] = i;
    }
    cout << find_sum(table, 10) << endl;     // Første 10
    cout << find_sum(&table[10], 5) << endl; // Neste 5
    cout << find_sum(&table[15], 5) << endl; // Siste 5
}
int find_sum(const int *table, int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += table[i];
    }
    return sum;
}
