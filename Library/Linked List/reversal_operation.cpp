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

void reverse(struct node **head_ref) {
  struct node *prev = NULL, *current = *head_ref, *temp;
  while (current != NULL) {
    temp = current->next_link;
    current->next_link = prev;
    prev = current;
    current = temp;
  }
  *head_ref = prev;
}

int main() {
  insert_at_begin(15);
  insert_at_begin(32);
  insert_at_begin(31);
  insert_at_begin(14);
  insert_at_begin(78);

  printf("Linked List: ");
  print_list();
  reverse(&head);
  cout << endl;
  printf("Reversed Linked List: ");
  print_list();

  return 0;
}
