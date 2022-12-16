#include "array_solutions.h"

#include <assert.h>

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

void sort_square_ordered_arr(const int arr[], const int length, int result[]) {
  // sizeof(array_pointer) cannot get array size, pointer is different from array name
  assert(length >= 0);
  int* squares = new int[length] ();
  for (int i{0}; i < length; ++i) {
    squares[i] = arr[i] * arr[i];
  }
  int l_pos{0};
  int r_pos{length - 1};
  int w_pos{length - 1};
  while (r_pos >= l_pos && w_pos >= 0) {
    if (squares[l_pos] > squares[r_pos]) {
      result[w_pos] = squares[l_pos];
      l_pos++;
    } else {
      result[w_pos] = squares[r_pos];
      r_pos--;
    }
    w_pos--;
  }
  assert(w_pos == -1);
  delete squares;
}

int length_min_sub_array(const int arr[], const int length, const int target) {
  assert(length > 0);
  int sub_len{length};
  int str{0};
  int sum{0};
  for (int end{0}; end < length; ++end) {
    sum += arr[end];
    while (sum - arr[str] >= target) {
      sum -= arr[str];
      str++;
    }
    if (sum >= target) {
      sub_len = std::min(sub_len, end - str + 1);
    }
  }
  return sub_len % length;
}
