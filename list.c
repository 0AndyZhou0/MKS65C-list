#include <stdio.h>
#include <stdlib.h>
#include "list.h"


int main(){
  struct node thing;
  thing.i = 5;
  thing.next = 0;
  print_list(&thing);
  thing = *insert_front(&thing,4);
  print_list(&thing);
  thing = *insert_front(&thing, 19);
  print_list(&thing);
  thing = *insert_front(&thing, 9);
  print_list(&thing);
  thing = *insert_front(&thing, 42);
  print_list(&thing);
  thing = *insert_front(&thing, 10);
  print_list(&thing);
  free_list(&thing);
  print_list(&thing);
  return 0;
}
