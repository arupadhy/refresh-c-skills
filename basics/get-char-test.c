#include<stdio.h>

int main() {
  printf("Value of EOF is %d", EOF);
  int c;
  c = getchar();
  printf("getchar() != EOF is %d \n", c != EOF);
  return 0;
}
