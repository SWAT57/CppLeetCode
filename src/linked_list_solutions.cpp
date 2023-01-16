#include "linked_list_solutions.h"

#include <iostream>

LinkNode* linked_list_from_array(const int arr[], const int length) {
  LinkNode* head = nullptr;
  if (length < 1) {
    return head;
  }
  head = new LinkNode(arr[0]);
  LinkNode* last = head;
  for (int i{1}; i < length; i++) {
    LinkNode* tmp = new LinkNode(arr[i]);
    last->next = tmp;
    last = tmp;
  }
  return head;
}

void print_linked_list(const LinkNode* head) {
  std::cout << "linked list: ";
  while (head != nullptr) {
    std::cout << head->value << " ";
    head = head->next;
  }
  std::cout << std::endl;
}

void delete_linked_list(LinkNode* head) {
  while (head != nullptr) {
    LinkNode* tmp = head;
    head = head->next;
    std::cout << "deleting " << tmp->value << std::endl;
    delete tmp;
  }
}

LinkNode* delete_head_node(LinkNode* head) {
  if (head != nullptr) {
    LinkNode* tmp = head->next;
    delete head;
    return tmp;
  } else {
    return nullptr;
  }
}

void delete_next_node(LinkNode* prev) {
  if (prev != nullptr) {
    LinkNode* next = prev->next;
    if (next == nullptr) {
      std::cout << "next is void" << std::endl;
    } else {
      prev->next = next->next;
      delete next;
    }
  }
}

