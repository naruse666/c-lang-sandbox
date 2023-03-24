#include <stdio.h>
#include "../../include/module.h" 
// #include "module.c"

int main(){
  Module *m = Module_create();

  printf("element: %i\n", Module_get_element(m));

  Module_set_element(m, 0x0a);
  printf("element: %i\n", Module_get_element(m));

  Module_delete(m);
}