#include<stdio.h>
#include<string.h>

char * reverse(char *);
void reverse_efficient(char *);

main() {
  char * input;
  printf("Enter the string that you want to reverse \n");
  scanf("%s", input);
  printf("Reversed string via inefficient implementation is : %s \n", reverse(input)); 
  reverse_efficient(input);
  printf("reversed string via efficient approach is %s \n", input);
  return 0;
}

/*
Efficient method to reversal
*/

void reverse_efficient(char * input) {
  int length = strlen(input);
  for(int i = 0; i < length / 2; i++) {
    int temp = input[i];
    input[i] = input[length-i-1];
    input[length-i-1] = temp;
  }
}

/* 
InEfficient version for reversal
*/
char * reverse(char * input) {
  int length = strlen(input);
  char result[length];
  for(int i = length - 1; i >= 0; i--) {
    result[length-1-i] = input[i]; 
  }
  result[length] = '\0';

  return result;
}
