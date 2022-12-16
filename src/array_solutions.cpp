#include "array_solutions.h"

#include <iostream>
#include <assert.h>

void show_array(const int arr[], const int length) {
  std::cout << "arr[" << length << "] = ";
  for (int i{0}; i < length; ++i) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

int bisection_locate(const int arr[], const int length, const int target) {
  assert(length >= 0);
  int res{-1};
  int str{0};
  int end{length - 1};
  while (end >= str) {
    int mid{str + (end - str) / 2};
    std::cout << "compare with: " << arr[mid] << std::endl;
    if (arr[mid] > target) {
        end = mid - 1;
    } else if (arr[mid] < target) {
        str = mid + 1;
    } else {
        res = mid;
        break;
    }
  }
  return res;
}

void rm_target_in_array(int arr[], const int length, const int target) {
  assert(length >= 0);
  // int search_pos{1};
  // for (int pos{0}; pos < length; ++pos) {
  //   std::cout << "checking pos " << pos << std::endl;
  //   if (arr[pos] == target) {
  //     while (search_pos < length) {
  //       std::cout << "searching at pos " << search_pos << std::endl;
  //       if (arr[search_pos] != target) {
  //         arr[pos] = arr[search_pos];
  //         arr[search_pos] = target;
  //         search_pos++;
  //         break;
  //       }
  //       search_pos++;
  //     }
  //   } else {
  //     search_pos = std::max(search_pos, pos + 2);
  //   }
  //   if (search_pos >= length) {
  //     break;
  //   }
  // }
  int w_pos{0};
  for (int r_pos{0}; r_pos < length; ++r_pos) {
    if (arr[r_pos] != target) {
      arr[w_pos] = arr[r_pos];
      w_pos++;
    }
  }
}
