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
}

void insert_at_begin(int data) {
  struct node *current = (struct node *)malloc(sizeof(struct node));
  current->data = data;
  current->next_link = head;
  head = current;
}

void delete_at_end() {
  struct node *linkedlist = head;
  while (linkedlist->next_link->next_link != NULL)
    linkedlist = linkedlist->next_link;
  linkedlist->next_link = NULL;
}
int main() {
  insert_at_begin(15);
  insert_at_begin(32);
  insert_at_begin(31);
  insert_at_begin(14);
  insert_at_begin(78);

  printf("Linked List: ");

  print_list();

  delete_at_end();

  cout << endl;
  cout << "Linked List after deletion: ";
  print_list();
  
  return 0;
}
