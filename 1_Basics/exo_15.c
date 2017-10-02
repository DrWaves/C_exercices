#include <stdlib.h>
#include <stdio.h>


int main(int argc, char const *argv[]) {

  printf("%s\n",argv[0] );


  for (size_t i = argc-1; i > 0; i--) {
    printf("%s\n", argv[i]);
    /* code */
  }
  return 0;
}
