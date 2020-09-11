#pragma once

#include <cctype>
#include <cstring>
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class Commodity {
public:
  Commodity(const string &name_, int id_, double pris_);
  const string &get_name() const;
  double get_id() const;
  double get_price() const;
  double get_price(double quantity) const;
  void set_price(double ny_pris);
  double get_price_with_sales_tax(double quantity) const;

private:
  string name; // til identifikasjon
  int id;
  double pris;
};

// ==> Her kommer implementasjonen av klassen
Commodity::Commodity(const string &name_, int id_, double pris_) : name(name_), id(id_), pris(pris_) {}

const string &Commodity::get_name() const {
  return name;
}

double Commodity::get_id() const {
  return id;
}

double Commodity::get_price() const {
  return pris;
}
double Commodity::get_price(double quantity) const {
  return pris * quantity;
}

void Commodity::set_price(double ny_pris) {
  pris = ny_pris;
}

double Commodity::get_price_with_sales_tax(double quantity) const {
  return (pris * quantity * 1.25);
}
