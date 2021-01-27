#include <iostream>
#include <string>
#include <vector>
using namespace std;

void zeroBoth(int& num1, int& num2) { // Sets values to zero
    num1 = 0;
    num2 = 0;
}

int main(int argc, char *argv[]) { // Command line input
  int num1;
  int num2;

  // Converting string input to integers
  num1 = stoi(argv[1]);
  num2 = stoi(argv[2]);

  cout << "Your numbers are " << num1 << " and " << num2 << endl;
  cout << "Running through zero function..." << endl;
  zeroBoth(num1, num2);
  cout << "Your numbers are now " << num1 << " and " << num2 << endl;

  return 0;
}
