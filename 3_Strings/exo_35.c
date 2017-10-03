#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {
  int flag=0;
  char buffer[50];
  for (int i = 1; i < argc; i++) {
    flag=0;
    buffer[0] = '\0';
    strcpy(buffer,argv[i]);

for (size_t a = 0; a < strlen(buffer); a++) {
  buffer[a]=toupper((char)buffer[a]);
}
    for (size_t j = 0; j < strlen(buffer)/2; j++) {

if (buffer[j]!=buffer[strlen(buffer)-j-1]) flag=1;

    }
    if(flag==0) printf("%s is a palindrome\n",argv[i] );
    else printf("%s is not a palindrome\n",argv[i] );
  }
  return 0;
}
