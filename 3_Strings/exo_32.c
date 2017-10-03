#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* Shiftascii( const char* tab,  char* buffer,int shift){

  buffer[0] = '\0';
  strcpy(buffer,tab);
 for (size_t i = 0; i < strlen(tab); i++) {
 buffer[i]=tab[i]-shift;
 }
  return buffer;
}


int main(int argc, char const *argv[]) {
  char buffer[100];
for (int i = 1; i < argc; i++) {

  printf(" string : %s and lenght : %zu The upper version : %s  \n",argv[i], strlen(argv[i]),Shiftascii(argv[i],buffer,32));

}

  return 0;
}
