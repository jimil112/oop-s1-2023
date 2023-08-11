#include <iostream>
using namespace std;

extern bool is_array_palindrome(int integers_array[], int length);
extern int palindrome_sum(int integers_array[], int length);

int main() {
  int integers_array[] = {-1, 2, 2, -1}; // Example palindrome array
  int length = sizeof(integers_array) / sizeof(integers_array[0]);

  cout << "If not palindrome, function returns -2. If palindrome, sum is: "
       << palindrome_sum(integers_array, length) << endl;

  return 0;
}
