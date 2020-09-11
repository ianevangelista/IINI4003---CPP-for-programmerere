#pragma once

#ifndef MENGDE_DEFINERT
#define MENGDE_DEFINERT

#include <vector>

using namespace std;

class Set {
public:
  Set();
  Set(const vector<int> &startSet);
  Set &operator+=(const Set &denAndre);
  Set operator+(const int tall);
  Set &operator=(const Set &nySet);
  void skrivUtSet();

private:
  vector<int> mengde;
};

#endif