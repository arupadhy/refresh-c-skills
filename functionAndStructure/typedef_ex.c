#include<stdio.h>

typedef char bool;
#define true 1
#define false 0

int main() {
 bool x = true;

 printf("bool x has true value %d \n", x);
 printf("false value %d \n", !x);
 return 0; 
}
