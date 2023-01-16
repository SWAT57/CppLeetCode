#ifndef ARRAY_SOLUTIONS_H
#define ARRAY_SOLUTIONS_H

#include <iostream>

// display array
// template function must be implemented in .h
template <class T>
void print_array(const T* arr, const int length) {
  std::cout << "arr[" << length << "] = ";
  for (int i{0}; i < length; ++i) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
};

// bisection method: return -1 if not found, else return target's index in array
int bisection_locate(const int arr[], const int length, const int target);

// O(1) move target(s) to end of array, while keeping order of non-target
void rm_target_in_array(int arr[], const int length, const int target);

// put square of ordered array in order
void sort_square_ordered_arr(const int arr[], const int length, int result[]);

// length of min sub-array which's sum is greater than target
int length_min_sub_array(const int arr[], const int length, const int target);

#endif
