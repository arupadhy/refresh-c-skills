#include<stdio.h>

double celcius, farah;
int lower, upper, step;
int main() {
  
  lower = 10;
  upper = 300;
  step = 20;
printf("Farahnite \t Celcius \n");
  while(lower <= upper) {
    celcius = 5 * ((double)lower - 32) / 9;
    printf("%4d\t%15.2f\n", lower, celcius);
    lower += step;
  }

  return 0;

}
