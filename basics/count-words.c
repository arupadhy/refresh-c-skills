/**
Count number of words.
Take care of multiple spaces between words
**/
#include<stdio.h>

#define IN_A_WORD = 0;
#define OUT = 1;

int main() {
  char c;
  int count = 0;
  int state = IN_A_WORD;
  while ( (c = getchar()) != EOF) {
    
    if (c == '\t' || c == '\n' || c == ' ') {
         if (state == IN_A_WORD) {
           ++count;
           state = OUT;
         }
    }else {
      state = IN_A_WORD;  
    } 
  }
  
  printf("total count of words is %i \n", count);

  return 0;
}
