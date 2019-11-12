#include<stdio.h>

typedef struct list_node {
  list_node * next;
  int data;
} Node;

void print_list(Node * head) {
  Node * current = head;
  while(current != null) {
    printf("%d ---", current->data);
    current = current->next;
  }
}

void insert_at_end(int data, Node * head) {
  if (head == null) {
    head = insert(head, data);
  } else {
    head->next = insert(head->next, data);
  }
}


int main() {
  
  return 0;
}
