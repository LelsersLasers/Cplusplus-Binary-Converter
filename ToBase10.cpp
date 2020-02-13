#include <iostream>
#include <stdlib.h>
using namespace std;

string binary;
int binaryInt = 0;

int main() {
  cout << "Enter a Binary number: " << endl;
  cin >> binary;
  int j = 1;
  binaryInt = binaryInt + binary[binary.length()-1]-48;
  for (int i = binary.length()-2; i >=0 ; i--){
    j = j * 2;
    int currentBit = binary[i] -48;
    binaryInt = binaryInt + j*currentBit;
  }
  cout << binaryInt;
}
