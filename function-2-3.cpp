bool is_array_palindrome(int integers[], int length) {
  if (length == 0 || length < 0) {
    return false;
  }
  int num_left = 0;
  int num_right = length - 1;

  while (num_left < num_right) {
    if (integers[num_left] != integers[num_right]) {
      return false;
    }
    num_left++;
    num_right--;
  }
  return true;
}

int sum_integers(int integers[], int length) {
  if (length == 0 || length < 0) {
    return false;
  }

  int sum_elements = 0;

  for (int i = 0; i < length; i++) {
    sum_elements += integers[i];
  }

  return sum_elements;
}

int palindrome_sum(int integers[], int length) {
  if (length == 0 || length < 0) {
    return false;
  }

  bool array_palindrome = is_array_palindrome(integers, length);

  if (array_palindrome) {
    int total_sum = sum_integers(integers, length);
    return total_sum;
  } else {
    return -2;
  }
}
