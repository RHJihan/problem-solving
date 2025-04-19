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

void insert_at_end(int data) {
  struct node *current = (struct node *)malloc(sizeof(struct node));
  current->data = data;
  struct node *linked_list = head;
  while (linked_list->next_link != NULL) {
    linked_list = linked_list->next_link;
  }
  linked_list->next_link = current;
}

int main() {
  insert_at_begin(10);
  insert_at_end(25);
  insert_at_end(45);
  insert_at_end(102);
  insert_at_end(30);
  insert_at_end(49);

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
