#include<stdio.h>

int main() {
  int c, count;
  count = 0;
  
  printf("%d \n", EOF);
  while( (c = getchar()) != EOF) {
    printf("%c \n", c);
    ++count;
  }
  printf("I am here");
  printf("Number of chars : %d", count);
  return 0;
}
