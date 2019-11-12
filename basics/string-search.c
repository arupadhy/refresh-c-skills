#include<stdio.h>
#include<string.h>

char tracks[][80] = {
    "I left my heart in harward",
    "My name is Anthony",
    "You fill my senses",
    "like a river in mountain",
    "come again"
  };

void find_track(char item[]) {
  for(int i = 0; i<5; i++) {
    printf("Searching item: %s in %s \n", item, tracks[i]);
    printf("%i\n", strstr("I left my heart", "left"));
    int result = strstr(tracks[i], item); 
    if (result){
      printf("Found track %s at index: %i\n", tracks[i], i); 
    }else {
      printf("could not find...result: %i\n", result); 
    }
  }
}

int main() {
  char search_item[80];
  fgets(search_item, 80, stdin);
  find_track(search_item);

  return 0;   
}


