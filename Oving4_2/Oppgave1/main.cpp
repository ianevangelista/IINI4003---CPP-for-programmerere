//
//  main.cpp
//  Oppgave1
//
//  Created by Ian Evangelista on 03/09/2020.
//  Copyright © 2020 Ian Evangelista. All rights reserved.
//

#include <algorithm> // header-fil for algoritmer
#include <iostream>
#include <vector> // header-fil for vector

using namespace std;

int main(int argc, const char *argv[]) {
  vector<double> numbers{1, 2, 3, 4, 5}; // oppretter en vektor av double
  cout << "Skriver ut numbers.front(): " + to_string(numbers.front()) << endl;
  cout << "Skriver ut numbers.back(): " + to_string(numbers.back()) << endl;

  numbers.emplace(numbers.begin() + 1, 15); // Legger til 15 på plassen etter 1
  cout << "Skriver ut numbers.front() etter å ha brukt numbers.emplace(): " + to_string(numbers.front()) << endl;

  auto it = find(numbers.begin(), numbers.end(), 15);
  it != numbers.end() ? cout << "15 ble funnet på posisjon: " + to_string(it - numbers.begin()) << endl : cout << "15 ble ikke funnet" << endl;
}
