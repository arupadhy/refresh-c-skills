/**
Program to print its input one word per line

**/

#include<stdio.h>

#define BUFFER_LENGTH l0 // when to dump the stored words
#define IN 0 // inside word
#define OUT 1 // outside word

int main() {
 
  char *[] words;
  char c;
  int state = OUT;
  int word_so_far = 0;
  char [] current_word;
  int current_word_index;

  while( (c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if(state == IN) {
        words[word_so_far++] =     
      }
    } 
  }
  
  return 0;
}
