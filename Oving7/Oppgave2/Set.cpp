#include "Set.hpp"
#include <iostream>

Set::Set() {
  mengde = vector<int>();
}

Set::Set(const vector<int> &startSet) {
  mengde = startSet;
}

Set Set::operator+(const int tall) {
  bool tallEksisterer = false;
  for (size_t i = 0; i < mengde.size(); i++) {
    if (mengde.at(i) == tall) {
      tallEksisterer = true;
    }
  }

  if (!tallEksisterer) {
    mengde.emplace_back(tall);
  }
  return *this;
}

Set &Set::operator+=(const Set &denAndre) {
  for (size_t i = 0; i < denAndre.mengde.size(); i++) {
    bool funnet = false;
    for (size_t j = 0; j < mengde.size(); j++) {
      if (denAndre.mengde.at(i) == mengde.at(j)) {
        funnet = true;
      }
    }
    if (!funnet) {
      mengde.emplace_back(denAndre.mengde.at(i));
    }
  }
  return *this;
}

Set &Set::operator=(const Set &nySet) {
  mengde.clear();
  //mengde.emplace_back(nySet.mengde);
  for (size_t i = 0; i < nySet.mengde.size(); i++) {
    mengde.emplace_back(nySet.mengde.at(i));
  }

  return *this;
}

void Set::skrivUtSet() {
  cout << "{";
  for (size_t i = 0; i < mengde.size(); i++) {
    if (i != 0) {
      cout << ", ";
    }
    cout << mengde.at(i);
  }
  cout << "}" << endl;
}