#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  //const char *hexstring = "0xabcdef0";
int number = (int)strtol(argv[1], NULL, 0);
printf("%d\n",number );
  return 0;
}
