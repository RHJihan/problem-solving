#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;

  ListNode(int x) : val(x), next(nullptr) {}
};

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {

  ListNode dummy(0);
  ListNode *tail = &dummy;

  while (list1 && list2) {
    if (list1->val <= list2->val) {
      tail->next = list1;
      list1 = list1->next;
    } else {
      tail->next = list2;
      list2 = list2->next;
    }
    tail = tail->next;
  }

  if (list1)
    tail->next = list1;
  else
    tail->next = list2;

  return dummy.next;
}

void printList(ListNode *head) {
  while (head != nullptr) {
    cout << head->val;
    if (head->next)
      cout << " -> ";
    head = head->next;
  }
  cout << endl;
}

ListNode *createList(int arr[], int size) {
  if (size == 0)
    return nullptr;

  ListNode *head = new ListNode(arr[0]);
  ListNode *current = head;

  for (int i = 1; i < size; ++i) {
    current->next = new ListNode(arr[i]);
    current = current->next;
  }

  return head;
}

int main() {
  int arr1[] = {1, 2, 4};
  int arr2[] = {1, 3, 4};

  ListNode *list1 = createList(arr1, 3);
  ListNode *list2 = createList(arr2, 3);

  ListNode *merged = mergeTwoLists(list1, list2);

  cout << "Merged List: ";
  printList(merged);

  return 0;
}
