#include <stdio.h>
#include <stdlib.h>

int prooftrue (){
  printf("Shortcut proof true\n");
  return 1;
}
int prooffalse (){
  printf("Shortcut proof false and the last one \n");
  return 0;
}

int main(int argc, char const *argv[]) {
printf("WITHOUT SHORTCUT :\n");
  if( prooftrue() & prooftrue() & prooffalse() & prooftrue()){
    printf("Never printed\n");
  }
  printf("WITH SHORTCUT :\n");
  if( prooftrue() && prooftrue() && prooffalse() && prooftrue()){
    printf("Never printed\n");
  }
  return 0;
}
