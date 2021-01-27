#include <iostream>
using namespace std;

float addTax(float taxRate, float cost) { // Adds tax rate to cost
  return cost + (taxRate / 100);
}

int main() {
  float cost = 10.0;
  float taxRate = 9.8;

  cout << "Your cost was $" << cost << endl;
  cout << "The tax rate was " << taxRate << "%" << endl;
  cout << "Your total cost is $" << addTax(taxRate, cost) << endl;

  return 0;
}
