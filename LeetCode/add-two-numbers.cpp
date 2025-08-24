#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode *result = new ListNode();
    ListNode *resultPointer = result;

    int carry = 0;
    while (l1 || l2) {
      int sum = carry;

      if (l1) {
        sum += l1->val;
        l1 = l1->next;
      }
      if (l2) {
        sum += l2->val;
        l2 = l2->next;
      }
      
      carry = sum / 10;
      resultPointer->next = new ListNode(sum % 10);
      resultPointer = resultPointer->next;
    }

    if (carry) {
      resultPointer->next = new ListNode(carry);
    }

    return result->next;
  }
};

void printList(ListNode *node) {
  while (node != nullptr) {
    cout << node->val;
    if (node->next != nullptr) {
      cout << " -> ";
    }
    node = node->next;
  }
  cout << endl;
}

ListNode *createList(int arr[], int size) {
  ListNode *head = nullptr;
  ListNode *current = nullptr;

  for (int i = 0; i < size; i++) {
    ListNode *newNode = new ListNode(arr[i]);
    if (head == nullptr) {
      head = newNode;
      current = head;
    } else {
      current->next = newNode;
      current = current->next;
    }
  }
  return head;
}

int main() {
  int arr1[] = {2, 4, 3};
  int arr2[] = {5, 6, 4};

  ListNode *l1 = createList(arr1, 3);
  ListNode *l2 = createList(arr2, 3);

  Solution solution;
  ListNode *result = solution.addTwoNumbers(l1, l2);

  cout << "Result: ";
  printList(result);

  return 0;
}
