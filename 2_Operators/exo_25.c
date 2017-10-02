#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
int number;
int rem;
int sum = 0;

  for (int e = 1; e < argc; e++) {
  number = strtol(argv[e],NULL,0);
printf("------------ number : %s=--------\n", argv[e]);
   sum = 0;


  for (int i = 1; i <number; i++)
  {
      rem = number % i;
if (rem == 0)
      {
          sum = sum + i;
      }
  }
  if (sum == number)
      printf("Entered Number is perfect number \n");
  else
      printf("Entered Number is not a perfect number\n");
    }
  return 0;

}
