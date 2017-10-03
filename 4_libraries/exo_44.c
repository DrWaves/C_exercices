#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[]) {
    srand( time(NULL));
    int random =rand() % 5;
    printf(" Ranbom number generated !\n");
    int challenge;
    int flag=0;
    while(flag==0){
      printf("Try mumber\n");
      scanf("%d",&challenge);
      if (challenge==random) {
        printf("CONGRATS !!!\n" );
        flag=1;
      } else if (challenge>random) {
        printf("Too Much !");
      } else if(challenge<random){
        printf("Too less !");
      }
    }



  return 0;
}
