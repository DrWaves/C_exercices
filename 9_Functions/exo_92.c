#include<stdlib.h>
#include<stdio.h>

void function (int a);

int main(int argc, char const *argv[]) {
  int number=strtol(argv[1],NULL,0);
  printf(" Address of the memory in main() %p \n", &number );
  function(number);
  return 0;
}

void function (int a ) {
  printf(" Address of the memory in function() %p \n", &a);


}
