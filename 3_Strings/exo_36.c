#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


void cleanString (char* string){
  int u=0;
for (size_t i = 0; i < strlen(string)-1-u; i++) {
  if (string[i]==' ' || string[i]=='!' || string[i]==',' || string[i]=='.' || string[i]=='-' ){
    u++;
    for (size_t j = i; j < strlen(string)-1; j++) {
      string[j]=string[j+1];
    }

  }
}
string[strlen(string)-u]='\0';
printf("%s\n",string );
}
int main(int argc, char const *argv[]) {
  int flag=0;
  char buffer[50];
  char solution[50];
  printf("Enter a string :\n ");
  // EWOUD : IS GETS DANGEROUS ?
  gets(buffer);
strcpy(solution,buffer);



cleanString(buffer);
for (size_t a = 0; a < strlen(buffer); a++) {
  buffer[a]=toupper((char)buffer[a]);
}
    for (size_t j = 0; j < strlen(buffer)/2; j++) {
//rintf("%s : %s\n",buffer[j],buffer[strlen(buffer)-j-1]);
if (buffer[j]!=buffer[strlen(buffer)-j-1]) flag=1;

    }
    if(flag==0) printf("%s is a palindrome\n",solution);
    else printf("%s is not a palindrome\n",solution);

  return 0;
}
