#include <stdio.h>
#include <stdlib.h>
#include "list.h"

//struct node { int i; struct node *next;};

void print_list(struct node * current){
  printf("[%d", current -> i);
  while(current = current -> next){
    printf("\n%d", current -> i);
  }
  printf("]\n");
}

struct node * insert_front(struct node * head, int i){
  struct node * new = malloc(sizeof(struct node));
  new -> next = head -> next;
  new -> i = head -> i;
  head -> next = new;
  head -> i = i;
  //printf("%d\n",&head);
  //printf("%d\n",new -> next);
  return head;
}

struct node * free_list(struct node * node);

int main(){
  struct node thing;
  thing.i = 5;
  thing.next = 0;
  print_list(&thing);
  thing = *insert_front(&thing,4);
  print_list(&thing);
  thing = *insert_front(&thing, 19);
  print_list(&thing);
  return 0;
}
