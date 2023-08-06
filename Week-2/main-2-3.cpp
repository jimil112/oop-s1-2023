#include <iostream>
using namespace std;

extern bool is_palindrome(int integers_array[], int length);
extern int sum_array_elements(int integers_array[], int length);
extern int sum_if_palindrome(int integers_array[], int length);

int main() {
  int integers_array[] = {1, 2, 2, 1};
  int length = sizeof(integers_array) / sizeof(integers_array[0]);

  cout << "If output is 1, the array is palidrome, if not the output is 0: "
       << is_palindrome(integers_array, length) << endl;
  cout << "When the array is palindrome the sum is: "
       << sum_if_palindrome(integers_array, length) << endl;
  cout << "Palinfrome array sum: "
       << sum_array_elements(integers_array, length) << endl;

  return 0;
}
