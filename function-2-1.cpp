#include <iostream>
#include <string>
using namespace std;

void print_binary_str(string decimal_number) {
  int new_decimal;
  new_decimal = stoi(decimal_number);

  if (new_decimal == 0) {
    cout << "0" << endl;
  }

  string binary_num;

  while (new_decimal > 0) {
    binary_num = to_string(new_decimal % 2) + binary_num;

    new_decimal = new_decimal / 2;
  }

  cout << binary_num << endl;
}
