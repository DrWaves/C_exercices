#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  printf("------SIZE OF ------\n");
  printf("INT : %zu bytes\n", sizeof(int));
  printf("SHORT INT : %zu bytes\n", sizeof(short int ));
  printf("LONG INT : %zu bytes\n", sizeof(long int));
  printf("LONG LONG INT : %zu bytes\n", sizeof(long long int));
  printf("*VOID : %zu bytes\n", sizeof(void*));


  return 0;
}
