#include <stdio.h>
#include <stdlib.h>
typedef struct node {
  int data;
  struct node *next;
} node;
// Create Node cn
node *cn(int data) {
  node *n = (node *)malloc(sizeof(node));
  n->data = data;
  n->next = NULL;
  return n;
}
// insert node at end
int iae(node **head, node *newnode) {
  if (*head == NULL) {
    *head = newnode;
    return 1;
  }
  node *temp = *head;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = newnode;
  return 1;
}
// print linked list
int pll(node *head) {
  node *temp = head;  // not needed just for my habit.
  while (temp != NULL) {
    printf("%i-->", temp->data);
    temp = temp->next;
  }
  printf("NULL");
  return 1;
}
// search node

// delete node

int main() {
  node *head = NULL;
  iae(&head, cn(4));
  iae(&head, cn(5));
  pll(head);
}