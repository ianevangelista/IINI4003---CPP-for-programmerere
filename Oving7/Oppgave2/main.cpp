#include "Set.hpp"
#include <iostream>

using namespace std;

int main() {
  // Lage en tom mengde og så fylle på elementer
  Set mengdeA;
  mengdeA + 1;
  mengdeA + 4;
  mengdeA + 3;
  mengdeA.skrivUtSet();

  // Lage en mengde med startmengde
  vector<int> tall = {4, 7};
  Set mengdeB(tall);
  mengdeB.skrivUtSet();

  // Lage summen (union) av to mengder
  Set sumAB;
  sumAB = mengdeA;
  sumAB += mengdeB;
  sumAB.skrivUtSet();
}