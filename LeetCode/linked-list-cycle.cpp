#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

bool hasCycle(ListNode *head) {
  if (head == NULL || head->next == NULL) {
    return false;
  }

  ListNode *slow = head;
  ListNode *fast = head;

  while (fast != NULL && fast->next != NULL) {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast) {
      return true;
    }
  }

  return false;
}

int main() {

  ListNode *node1 = new ListNode(3);
  ListNode *node2 = new ListNode(2);
  ListNode *node3 = new ListNode(0);
  ListNode *node4 = new ListNode(-4);

  node1->next = node2;
  node2->next = node3;
  node3->next = node4;
  node4->next = node2;

  if (hasCycle(node1)) {
    cout << "True" << endl;
  } else {
    cout << "False" << endl;
  }

  return 0;
}