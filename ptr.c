#include <stdio.h>

int main(){
  int num = 10;
  int *ptr;
  int **ptr2;
  int ***ptr3;

  printf("num address: %p \n", &num);
  printf("\n");
  
  // *ptr
  ptr = &num;
  printf("ptr add: %p \n", &ptr);
  printf("ptr value: %p \n", ptr); // same &num
  printf("*ptr ref: %d \n", *ptr);  // 10
  printf("\n");

  // **ptr
  ptr2 = &ptr;
  printf("ptr2 add: %p \n", &ptr2);
  printf("ptr2 value: %p \n", ptr2);  // same &ptr
  printf("*ptr2 ref: %p \n", *ptr2);   // same ptr and &num
  printf("**ptr2 ref: %d \n", **ptr2); // 10
  printf("\n");

  // ***ptr
  ptr3 = &ptr2;
  printf("ptr3 add: %p \n", &ptr3);
  printf("ptr3 value: %p \n", ptr3); // same &ptr2
  printf("*ptr3 ref: %p \n", *ptr3); // same &ptr
  printf("**ptr3 ref: %p \n", **ptr3); // same &num
  printf("***ptr3 ref: %d \n", ***ptr3); // 10
}