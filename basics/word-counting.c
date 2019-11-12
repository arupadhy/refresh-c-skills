/**
Count no of words 
Take care of different types of spaces possible namely tab, newline and multiple spaces

**/

#include<stdio.h>

// keep track of where you are while reading the chars
#define IN 0 // inside a word so far
#define OUT 1 // outside a word

int main() {
  
  int count = 0;
  char c;
  int state = OUT;

  while ( (c = getchar()) != EOF) {
    if (c == '\n' || c == '\t' || c == ' ') {
      // found space
      if (state == IN) {
        // was inside a word so far
        ++count; // found a valid word
        state = OUT;
      }
    }else {
      state = IN;
    }
  }
  printf("Number of words : %d", count);

  return 0;
}
