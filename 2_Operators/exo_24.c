#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]) {
 int prime ;
 int flag = 0;
  int flag2 = 0;

for (int e = 1; e < argc; e++) {
  flag=0;
  flag2=0;
  prime = strtol(argv[e],NULL,0);
printf("------------ number : %s=--------\n", argv[e]);

   for(int i=2; i<prime; ++i)
   {

       if(prime%i==0)
       {
           flag=1;
           break;
       }
   }

   if (flag==0)
       printf("%d is a prime number.\n",prime);
   else
       printf("%d is not a prime number. \n",prime);

for (int j = prime -1; j > 1; j--) {

flag2=0;
  for(int a=2; a<j; ++a)
  {

      if(j%a==0)
      {
          flag2=1;

          break;
      }

  }
  if (flag2==0){
      printf("%d is a prime number lower than the previous one\n",j);
      break;
      }
}
}
  return 0;
}
