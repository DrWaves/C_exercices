#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int intArray[5]={6,7,8,9,10};
  char charArray[5]={'a','b','c','d','e'};
  int *pint=&intArray[0];
  char *pchar=&charArray[0];
  printf(" INITIAL ADRRES OF THE POINTER :%p\n",pint );
  printf("Wich element do you want to display ? \n");
  int count;
  scanf("%d",&count);
  for (size_t i = 0; i < count; i++) {
    pint++;
    printf(" INCREMENT : NEW ADDRESS OF THE POINTER :%p\n",pint );
  }
  printf("%d\n",*pint );

  return 0;
}
