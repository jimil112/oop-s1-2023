#include <iostream>

using namespace std;

bool is_fanarray(int array[], int n) {
  if (n < 1) {
    return false;
  }

  bool inspect = true;

  for (int i = 0; i < n / 2; i++) {
    if (array[i] != array[n - 1 - i] || array[i] > array[i + 1]) {
      return false;
    }
  }
  return inspect;
}
