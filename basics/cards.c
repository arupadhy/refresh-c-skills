/*
Basic Cards to evaluate face values  (Head first -c )
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
  char card_name[3];
  puts("Enter the card name: ");
  scanf("%2s", card_name);
  int val = 0;
  if (card_name[0] == 'K') {
    val = 13;
  } else if (card_name[0] == 'Q') {
    val = 12;
  } else if (card_name[0] == 'J') {
    val = 11;
  } else if( card_name[0] == 'A') {
    val = 1;
  } else {
    val = atoi(card_name);
  }

  printf("The card value is: %i\n", val);
  return 0; 
}

