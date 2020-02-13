#include <iostream>
using namespace std;

int number;
string binary = "00000000";

int main() {
  cout << "Enter a number: ";
  cin >> number;
  for (int i = 0; i < number; i++){
    bool switchLetter = true;
    for (int j = binary.length()-1; j >= 0; j--){
      if (binary[j] == '0' && switchLetter){
        binary[j] = '1';
        switchLetter = false;
      }
      else if (binary[j] == '1' && switchLetter){
        binary[j] = '0';
      }

    }

  }
  cout << binary;
  return 0;
}
