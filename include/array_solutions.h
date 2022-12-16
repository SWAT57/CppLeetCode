#ifndef ARRAY_SOLUTIONS_H
#define ARRAY_SOLUTIONS_H

void show_array(const int arr[], const int length);

// bisection method: return -1 if not found, else return target's index in array
int bisection_locate(const int arr[], const int length, const int target);

// O(1) move target(s) to end of array, while keeping order of non-target
void rm_target_in_array(int arr[], const int length, const int target);

#endif
