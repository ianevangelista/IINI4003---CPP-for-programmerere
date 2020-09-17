#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

template <typename Type>
bool equal(Type type1, Type type2) {
  cout << "Using template version" << endl;
  return (type1 == type2);
}

//template <typename Type>
bool equal(double type1, double type2) {
  cout << "Using special template version" << endl;
  return (abs(type1 - type2) < 0.00001);
}

int main() {
  int template1 = 1;
  int template2 = 1;

  double special1 = 1.000000001;
  double special2 = 1.000000012;

  cout << setprecision(6) << equal(template1, template2) << endl;
  cout << setprecision(6) << equal(special1, special2) << endl;
}