#include <iostream>

int array_min(int integers[], int length) {
  if (length <= 0) return -1;

  int min_component = integers[0];
  for (int i = 1; i < length; ++i) {
    if (integers[i] < min_component) min_component = integers[i];
  }
  return min_component;
}

int array_max(int integers[], int length) {
  if (length <= 0) return -1;

  int max_component = integers[0];
  for (int i = 1; i < length; ++i) {
    if (integers[i] > max_component) max_component = integers[i];
  }
  return max_component;
}

int sum_min_max(int integers[], int length) {
  if (length <= 0) return -1;

  int min_component = array_min(integers, length);
  int max_component = array_max(integers, length);

  return min_component + max_component;
}
