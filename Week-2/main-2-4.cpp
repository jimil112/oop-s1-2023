#include <iostream>

int sum_min_max(int integers[], int length);

int main() {
    int arr[] = {9, 4, 1, 13, 6};

    int sum = sum_min_max(arr, 5);
    std::cout << "The sum of the minimum and maximum component is: " << sum << std::endl;

    return 0;
}