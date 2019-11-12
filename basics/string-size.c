#include<stdio.h>


void print_size(char str[]) {
  printf("String reads as %s \n", str);
  printf("String is stored in stack at %p\n", str);
  printf("SizeOf str is %i\n", sizeof(str));
}

int main() {
  print_size("My Name is Arvind");
  return 0;  
}
