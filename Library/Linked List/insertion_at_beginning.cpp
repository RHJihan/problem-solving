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
  insert_at_begin(50);
  insert_at_begin(1);
  insert_at_begin(10);
  insert_at_begin(65);
  insert_at_begin(25);
  insert_at_begin(70);

  struct node *p = head;

  cout << "Linked List: " << endl;
  cout << "[";
  while (p != NULL) {
    cout << " " << p->data << " ";
    p = p->next_link;
  }
  cout << "]";

  return 0;
}
