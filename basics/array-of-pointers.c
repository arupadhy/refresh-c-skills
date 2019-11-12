#include<stdio.h>
#include<string.h>

int main() {
  char arrOfPointers[][10] = {
    "first", "Second", "Third", "fourth", "fifth", "six", "seven" 
  };

  printf("arrOfPointers value: %s\n", arrOfPointers[0]);

  arrOfPointers[0][1] = 'T';
  printf("arrOfPointers value: %s\n", arrOfPointers[0]);

  return 0;
}
