#include <iostream>
using namespace std;

float input () { // Returns input in feet
  float feet;
  float inches;

  cout << "Enter feet: ";
  cin >> feet;
  while (!cin) { // Catches any invalid feet inputs
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "Invalid input. Try again!" << endl;
    cout << "Enter feet: ";
    cin >> feet;
  }

  cout << "Enter inches: ";
  cin >> inches;
  while (!cin) { // Catches any invalid inches inputs
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "Invalid input. Try again!" << endl;
    cout << "Enter inches: ";
    cin >> inches;
  }

  return feet + (inches / 12);
}


float convert(float feet) { // Transforms feet into centimeters
  float centimeters = (feet * 0.3048) * 100;
  return centimeters;
}

void output(float centimeters) { // Returns statement of metric conversion
  float meters = 0;

  while (centimeters > 100) { // For every 100 centimeters, a meter is added
    meters++;
    centimeters -= 100;
  }

  cout << "Meters: " << meters << endl;
  cout << "Centimeters: " << centimeters << endl;
}

int main() {
  string userInput;
  while (userInput != "exit") {
    output(convert(input()));
    cout << "Type exit to end the program, or any input to continue. ";
    cin >> userInput;
  }

  return 0;
}
