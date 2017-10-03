#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int maxi(int* tab){
  int sol=tab[0];
for (size_t i = 1; i < 10; i++) {
  if (tab[i]>sol) {
  sol=tab[i];
  }
}
return sol;
}
int main(int argc, char const *argv[]) {
int tab[10];
for (size_t i = 0; i < 10; i++) {
  printf(" Enter number :%zu \n",i+1 );
  scanf("%d",&tab[i] );
}

int c=maxi(tab);
printf(" maximum :%d\n",c );
  return 0;
}
