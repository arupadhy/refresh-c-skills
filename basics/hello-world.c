#include<stdio.h>
/**
To see this, use following command

gcc -Wall -save-temps hello-world.c -o outfile

C compilation process:
  1)Preprocessing
    Remove comments
    Exapansion of Macros
    Insert header file definition code as included
    Conditional compilation

hello-world.i is generated as a result of this step 
 
  2)Compilation
    convert c code to assembly instruction

hello-world.s is generated as a result of this step
(a bit readable if you remember micro-processor class that you took at some point)

  3)Assembly
    convert assembly instruction to machine code (the external    library calls are not resolved)

 hello-world.o is generated as a result of this step
 (this is not readable but you should still see printf call as it is)

  4)Linking
    link the code for dependent library...Linker also puts some extra code (static linking/ dynamic linking) 

 outfile is generated as a result of this which is ready
 to execute
**/
int main() {
  printf("Hello world");

  return 0;
}
