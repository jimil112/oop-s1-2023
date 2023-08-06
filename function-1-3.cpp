#include <iostream>
#include <map>

void count_digits(int array[4][4]) {
  std::map<int, int> numCount;

  for (int i = 0; i < 10; ++i) {
    numCount[i] = 0;
  }

  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 4; ++j) {
      int num = array[i][j];
      numCount[num]++;
    }
  }

  for (int i = 0; i < 10; ++i) {
    std::cout << i << ":" << numCount[i] << ";";
  }
  std::cout << std::endl;
}