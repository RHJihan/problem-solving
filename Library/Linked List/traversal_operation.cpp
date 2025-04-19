#include <iostream>
using namespace std;

struct node {
  int data;
  struct node *next_link;
};
struct node *head = NULL;

void insert_at_begin(int data) {
  struct node *current = (struct node *)malloc(sizeof(struct node));
  current->data = data;
  current->next_link = head;
  head = current;
}

int main() {
  insert_at_begin(15);
  insert_at_begin(32);
  insert_at_begin(31);
  insert_at_begin(14);
  insert_at_begin(78);

  cout << "Linked List: ";
  struct node *p = head;

  cout << endl;
  cout << "[";
  while (p != NULL) {
    cout << " " << p->data << " ";
    p = p->next_link;
  }
  cout << "]";
  
  return 0;
}
