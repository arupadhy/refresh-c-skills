#include<stdio.h>

float fahranite_to_celsius(float farah);

int main() {
  
  printf("%5s %5s \n", "F", "C" );
  for(int i = 300; i >= 0; i = i - 20) {
    printf("%d %14.2f \n", i, fahranite_to_celsius(i));
  }
  return 0;
}

float fahranite_to_celsius(float farah) {
  return (5.0/9.0) * (farah - 32);
}
