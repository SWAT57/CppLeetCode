#ifndef LINKED_LIST_SOLUTIONS_H
#define LINKED_LIST_SOLUTIONS_H

struct LinkNode {
  int value;
  LinkNode* next;
  LinkNode(int x): value(x), next(nullptr) {}
};

LinkNode* linked_list_from_array(const int arr[], const int length);

void print_linked_list(const LinkNode* head);

void delete_linked_list(LinkNode* head);

#endif
