#include "Set.hpp"
#include <iostream>

using namespace std;

int main() {

  Set mengdeA; // Lager en tom mengde
  mengdeA + 1; // Legger inn tall i mengden
  mengdeA + 1; // Hvis et tall finnes fra før av i mengde, vil den ikke legges inn
  mengdeA + 4;
  mengdeA + 3;
  mengdeA.skrivUtSet(); //Skriver ut mengden

  vector<int> tall = {4, 7};
  Set mengdeB(tall); // Lager en mengde med startmengde
  mengdeB.skrivUtSet();

  Set sumAB;
  sumAB = mengdeA;  // Setter to mengder like hverandre
  sumAB += mengdeB; // Finner unionen av to mengder
  sumAB.skrivUtSet();
}

/*
 * Utskrift:
 * {1, 4, 3}
 * {4, 7}
 * 1, 4, 3, 7}
 */