#include<stdio.h>
#include<string.h>

char tracks[][80] = {
  "I left my heart in Harvard Med School",
  "Newark, Newark = a wonderful town",
  "Dancing with a Dork",
  "From here to maternity",
  "The girl from Two Jima"
};

void find_track(char search_for[]) {
  printf("sizeof (search_for) is : %i\n", sizeof(search_for));
  int i;
  for (i = 0; i < 5; i++) {
    printf("tracks[i]: %s, search_for: %s\n", tracks[i], search_for);
  printf(" %i \n", strstr(tracks[1], "town"));
    if (strstr(tracks[i], search_for)) {
      printf("Track %i: '%s'\n", i, tracks[i]);
    }
  }
}

int main() {
  char search_for[80];
  printf("Search for: ");

  fgets(search_for, 80, stdin);
//  find_track(search_for);
  for (int i = 0; i < 5; i++) {
    if(strstr(tracks[i], search_for)) {
      printf("Track %i: '%s'\n", i, tracks[i]);
    }
  } 
  return 0;
}
