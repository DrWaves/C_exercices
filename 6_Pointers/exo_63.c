#include <stdlib.h>
#include <stdio.h>

void mymemcpy(void* destination, void* source, size_t num){
char* pointerSource=(char*)source;
char* pointerDestination=(char*)destination;
for (size_t i = 0; i < num; i++) {
  *pointerDestination= *pointerSource;
   pointerSource++;
   pointerDestination++;
}
}

int main(int argc, char const *argv[]) {
  int a []= {1,2,3,4,5};
  int acopy[5];
  mymemcpy(acopy,a,sizeof(a));
  for (size_t i = 0; i < 5; i++) {
    printf(" element %zu : %d\n",i,acopy[i] );  }
  return 0;
}
