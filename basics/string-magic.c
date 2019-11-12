#include<stdio.h>

int main() {
  char *cards = "JQK";
  printf("cards: %s\n", cards);
  printf("cards value: %c\n", *(cards+0));
  printf("cards value at index 1: %c\n", *(cards+1));
  
  printf("sizeof(cards): %i\n", sizeof(cards)); 
  printf("Cards: %s \n", cards);

  cards = "ABC";
  printf("Cards: %s \n", cards);

  return 0;
}
