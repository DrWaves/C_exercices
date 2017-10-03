#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {


   printf("PATH : %s\n", getenv("PATH"));
   printf("HOME : %s\n", getenv("HOME"));
   printf("USER : %s\n", getenv("USER"));


  return 0;
}
