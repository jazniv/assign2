#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) { // Command line input

  vector<int> numberArray(10); // Sets size of numberArray to 10

  for (int i = 0; i < 10; ++i) {
    numberArray.at(i) = stoi(argv[i+1]); // Converting string input to integer
  }

  cout << "Your array:" << endl; // Prints contents of numberArray
  for (int j = 0; j < numberArray.size(); ++j) {
    if (numberArray.at(j) < 0) { // Skips negative number input
      continue;
    }
    cout << numberArray.at(j) << endl;
  }

  return 0;

}
