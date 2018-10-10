#include <stdio.h>
#include <stdlib.h>
#include "list.h"

//struct node { int i; struct node *next;};

void print_list(struct node * current){
  printf("%d\n", current -> i);
  while(current = current -> next){
    printf("%d\n", current -> i);
  }
}

struct node * insert_front(struct node * node, int i){
  struct node * new = (struct node *)malloc(8 + sizeof(struct node));
  new -> i = i;
  new -> next = &node;
  return new;
}

int main(){
  struct node thing;
  thing.i = 5;
  thing.next = NULL;
  print_list(&thing);
  thing = *insert_front(&thing,4);
  print_list(&thing);
  thing = *insert_front(&thing, 19);
  print_list(&thing);
  return 0;
}
