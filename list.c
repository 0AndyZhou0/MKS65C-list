#include <stdio.h>
#include "list.h"

//struct node { int i; struct node *next;};

void print_list(struct node * current){
  printf("%d\n", current -> i);
  while(current = current -> next){
    printf("%d\n", current -> i);
  }
}

int main(){
  struct node thing1;
  struct node thing2;
  thing1.i = 5;
  thing1.next = &thing2;
  thing2.i = 4;
  thing2.next = NULL;
  print_list(&thing1);
  return 0;
}

