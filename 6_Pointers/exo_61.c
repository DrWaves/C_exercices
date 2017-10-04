#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a=23;
  int *pa=&a;
  *pa = 52;
  char b='c';
  char *pb=&b;
  *pb='p';
  printf(" Value :%d\n",a );
  printf(" Pointer %p:%p\n",pa, &a );
  printf(" Value :%c\n",b );
  printf(" Pointer :%p\n",pb );
  return 0;
}
