#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

void CheckArgument(int const argc, char const *argv[]){
  if(argc<4){
    printf("NOT ENOUGH ARGUMENT\n");

  }
  if(strlen(argv[1])!=1){
    printf("OPERANDS STRING IS NOT 1\n");

  }
}



void Operation(int argc, char const *argv[]){
  int solution=strtol (argv[2],NULL,0);

  if (strcmp(argv[1],"+")== 0){
    for (int i = 3; i < argc; i++) {
      solution +=(int)strtol (argv[i],NULL,0);

    }
    printf("%d\n",solution );
  }

   else if (strcmp(argv[1],"-")== 0){
    for (int i = 3; i < argc; i++) {
      solution -=(int)strtol (argv[i],NULL,0);
    }
    printf("%d\n",solution );
  }

  else if (strcmp(argv[1],"x")== 0){
    for (int i = 3; i < argc; i++) {
      solution *=(int)strtol (argv[i],NULL,0);
    }
    printf("%d\n",solution );
  }

    else if (strcmp(argv[1],"/")== 0){
    for (int i = 3; i < argc; i++) {
      solution /=(int)strtol (argv[i],NULL,0);
    }
    printf("%d\n",solution );
  }

  else if (strcmp(argv[1],"o")== 0){
  for (int i = 3; i < argc; i++) {
    solution |=(int)strtol (argv[i],NULL,0);
  }
  printf("%d\n",solution );
}
else if (strcmp(argv[1],"a")== 0){
for (int i = 3; i < argc; i++) {
  solution &=(int)strtol (argv[i],NULL,0);
}
printf("%d\n",solution );
}

else if (strcmp(argv[1],"^")== 0){
for (int i = 3; i < argc; i++) {
  solution ^=(int)strtol (argv[i],NULL,0);
}
printf("%d\n",solution );
}
  else{
    printf("NOT AUTHORIZED OPERAND\n");
    assert(1);
  }

}

int main(int argc, char const *argv[]) {

  CheckArgument(argc,argv);
  Operation (argc,argv);

  return 0;
}
