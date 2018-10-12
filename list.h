#include <stdio.h>
#include <stdlib.h>

struct node { int i; struct node *next;};

void print_list(struct node * current){
  printf("[%d", current -> i);
  while(current = current -> next){
    printf(", %d", current -> i);
  }
  printf("]\n");
}

struct node * insert_front(struct node * head, int i){
  struct node * new = malloc(sizeof(struct node));
  new -> next = head -> next;
  new -> i = head -> i;
  head -> next = new;
  head -> i = i;
  return head;
}

struct node * free_list(struct node * node){
  if(node -> next){
    free_list(node -> next);
    free(node -> next);
  }
  return node;
}
