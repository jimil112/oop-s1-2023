#include <iostream>

extern int sum_two_arrays(int array[], int secondarray[], int nSize);
int main() {



    int array[7] = {1, 2, 2, 4, 5, 5, 7};
    int secondarray[7] = {1, 4, 5, 6, 5, 7, 8};
    int nSize = sizeof(array)/sizeof(array[0]);


    std::cout << "The sum of the 2 arrays is " << sum_two_arrays(array, secondarray, nSize) << std::endl;
  return 0;
}