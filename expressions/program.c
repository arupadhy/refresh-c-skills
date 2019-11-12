#include <stdio.h>

#ifndef __cplusplus
  typedef char bool;
  #define true 1
  #define false 0
#endif

int main() {
  double c  = 0;
  double f = -74; 
  bool c2f = false;

  if (c2f) {
    f = c * 9/5 + 32;
  } else {
    c = (f-32) * 5/9;
  }
  
  printf("Temp in Farahnite is %f F\n and Celsius is %f\n", f, c);
  return 0;
  
}
