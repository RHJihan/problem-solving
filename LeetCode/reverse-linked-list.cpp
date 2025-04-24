#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *nextNode) : val(x), next(nextNode) {}
};

ListNode *head_node = nullptr;

void insert_at_begin(int data) {
  ListNode *current = new ListNode(data);
  current->next = head_node;
  head_node = current;
}

void print_list() {
  ListNode *p = head_node;
  cout << "[";
  while (p != nullptr) {
    cout << p->val;
    if (p->next)
      cout << ", ";
    p = p->next;
  }
  cout << "]" << endl;
}

ListNode *reverseList(ListNode *head) {
  ListNode *prev = nullptr;
  ListNode *curr = head;
  while (curr != nullptr) {
    ListNode *nextTemp = curr->next;
    curr->next = prev;
    prev = curr;
    curr = nextTemp;
  }
  return prev;
}

int main() {
  insert_at_begin(15);
  insert_at_begin(32);
  insert_at_begin(31);
  insert_at_begin(14);
  insert_at_begin(78);

  cout << "Linked List: ";
  print_list();

  head_node = reverseList(head_node);

  cout << "Reversed Linked List: ";
  print_list();

  return 0;
}
