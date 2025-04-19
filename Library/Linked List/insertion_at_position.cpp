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

void insert_after_node(struct node *list, int data) {
  struct node *lk = (struct node *)malloc(sizeof(struct node));
  lk->data = data;
  lk->next_link = list->next_link;
  list->next_link = lk;
}

int main() {
  insert_at_begin(16);
  insert_at_begin(25);
  insert_at_begin(45);
  insert_after_node(head->next_link, 56);
  insert_after_node(head->next_link->next_link, 102);

  struct node *p = head;

  cout << "Linked List: " << endl;
  cout << "[";
  while (p != NULL) {
    cout << " " << p->data << " ";
    p = p->next_link;
  }
  cout << "]";
}
