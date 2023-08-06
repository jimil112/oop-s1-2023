#include <iostream>
using namespace std;

bool is_palindrome(int integers[], int length) {
  if (length == 0 || length < 0) {
    return false;
  }

  int left_num = 0;
  int right_num = length - 1;

  while (left_num < right_num) {
    if (integers[left_num] != integers[right_num]) {
      return false;
    }

    left_num++;
    right_num--;
  }

  return true;
}

int sum_array_elements(int integers[], int length) {
  if (length == 0 || length < 0) {
    return -1;
  }

  int elements_sum = 0;

  for (int i = 0; i < length; i++) {
    elements_sum = elements_sum + integers[i];
  }

  return elements_sum;
}

int sum_if_palindrome(int integers[], int length) {
  if (length == 0 || length < 0) {
    return -1;
  }

  bool array_palindrome = is_palindrome(integers, length);

  if (array_palindrome) {
    int final_array = sum_array_elements(integers, length);
    return final_array;
  } else {
    return -2;
  }
}
