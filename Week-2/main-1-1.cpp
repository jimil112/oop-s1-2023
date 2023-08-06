#include <iostream>

int sum_diagonal(int array[4][4]);

int main() {
  int array[4][4] = {
      {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
  int diagonal_total = sum_diagonal(array);

  std::cout << "The sum of the elements of the main diagonal is: "
            << diagonal_total << std::endl;

  return 0;
}
