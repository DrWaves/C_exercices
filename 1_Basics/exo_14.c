#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  printf("%s\n",argv[0] );
  for (size_t i = 1; i < (argc); i++) {

    printf("%s\t",argv[i] );

  }
printf("\n");
return 0;
}
