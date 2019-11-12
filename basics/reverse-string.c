#include<stdio.h>
#include<string.h>

void print_reverse(char *);

int main() {
  char input[80];
  fgets(input, 80, stdin);

  printf("Input: %s\n", input);
  printf("Reversed Input is: \n");
  print_reverse(input);

  return 0;
}

void print_reverse(char *input) {
  size_t len = strlen(input);
  while(len >= 1) {
    printf("%c", *(input + len - 1));
    len--;
  }
} 
