#include <iostream>
using namespace std;

struct node {
  int data;
  struct node *next_link;
};
struct node *head = NULL;

void print_list() {
  struct node *p = head;

  cout << endl;
  cout << "[";
  while (p != NULL) {
    cout << " " << p->data << " ";
    p = p->next_link;
  }
  cout << "]";
  cout << endl;
}

void insert_at_begin(int data) {
  struct node *current = (struct node *)malloc(sizeof(struct node));
  current->data = data;
  current->next_link = head;
  head = current;
}

int search(int key) {
  struct node *temp = head;
  while (temp != NULL) {
    if (temp->data == key) {
      return 1;
    }
    temp = temp->next_link;
  }
  return 0;
}
int main() {
  insert_at_begin(15);
  insert_at_begin(32);
  insert_at_begin(31);
  insert_at_begin(14);
  insert_at_begin(78);

  cout << "Linked List: ";
  print_list();
  int element = 31;
  cout << "Element to be searched is: " << element << endl;
  int k = search(element);
  if (k == 1) {
    cout << "Element is found" << endl;
  } else {
    cout << "Element is not found in the list" << endl;
  }
  print_list();

  return 0;
}
