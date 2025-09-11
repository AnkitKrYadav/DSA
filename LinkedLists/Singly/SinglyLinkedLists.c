#include <stdio.h>
#include <stdlib.h>
// define struct
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
// insert at beginning
// insert at pos
//  update node
int un(int pos, int newval, node *head) {}
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
int s(node *head, int value) {
  int c = -1;
  while (head != NULL) {
    c += 1;
    if (head->data == value) {
      printf("found at %i", c);
      break;
    }
    head = head->next;
  }
}
// delete node
int dn(node *head, int pos) {
  int c = -1;
  while (head != NULL) {
    c += 1;
    if (pos + 1 == c) {
      head->next = head->next->next;
      break;
    }
    head = head->next;
    if (head == NULL) {
      printf("not found");
      return 0;
    }
    return 1;
  }
}
// count length
int cl(node *head) {}

int main() {
  node *head = NULL;
  iae(&head, cn(4));
  iae(&head, cn(5));
  pll(head);
}