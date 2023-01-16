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

LinkNode* delete_head_node(LinkNode* head);

void delete_next_node(LinkNode* prev);

LinkNode* delete_target_nodes(LinkNode* head, const int target);

class LinkedList {
 public:
  LinkedList();
  ~LinkedList();

  int Get(int index);
  void AddAtHead(int value);
  void AddAtTail(int value);
  void AddAtIndex(int index, int value);
  void DeleteAtIndex(int index);
  void Print();
 private:
  int length_;
  LinkNode* head_;
};

#endif
