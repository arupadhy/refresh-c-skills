#include<stdio.h>

typedef char bool;

#define true 1
#define false 0

void remove_space(char[] line, char[] space_chars);

bool is_matching_char(char input, char[] special_chars);

int main() {
  
  return 0;
}

void remove_space(char[] line, char special_chars) {
  int length = (sizeof line)/(sizeof char);
  for(int i = 0; i<length; i++) {
    if (is_matching_char(line[i], special_chars)) {
      // remove this from line  
    } 
  }
}

bool is_matching_char(char input, char[] special_chars) {
  int index = 0;
  char c;

  while( (c = special_chars[index]) != '\0') {
    if (c === input) {
      return true;
    } else {
      return false;
    }
    index++;
  }
}
