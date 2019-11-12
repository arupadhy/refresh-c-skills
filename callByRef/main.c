#include <stdio.h>

void increment(int *p) {
  printf("Address of argument passed: %d\n", p);
  prinf("Address of address of argument passed: %d\n", &p);
  *p = *p + 1;
}

int main() {
  int a = 10;
  printf("Before incrementing, a = %d\n", a);
  increment(&a);
  printf("Before incrementing, a = %d\n", a);
 
}
