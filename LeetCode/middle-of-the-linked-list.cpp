#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *nxt) { 
    val = x;
    next = nxt;
  }
};

ListNode *head_ref = nullptr;

void insert_at_begin(int data) {
  ListNode *current = new ListNode(data);
  current->next = head_ref;
  head_ref = current;
}

ListNode *middleNode(ListNode *head) { 
  ListNode *one = head;
  ListNode *two = head;

  while (two != nullptr && two->next != nullptr) {
    one = one->next;
    two = two->next->next;
  }

  return one;
}

int main() {
  insert_at_begin(50);
  insert_at_begin(1);
  insert_at_begin(10);
  insert_at_begin(65);
  insert_at_begin(25);
  insert_at_begin(70);


  cout << "Linked List: [";
  ListNode *p = head_ref;
  while (p != nullptr) {
    cout << " " << p->val;
    p = p->next;
  }
  cout << " ]" << endl;


  ListNode *mid = middleNode(head_ref);
  cout << "Middle Node: [";
  while (mid != nullptr) {
    cout << " " << mid->val;
    mid = mid->next;
  }
  cout << " ]" << endl;

  return 0;
}
