#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char  *argv[]) {
int i;
int a;
int opt;
  while ((opt = getopt(argc, argv, "h:d:")) != -1) {
    switch (opt) {
      case 'h':
        printf("Converter Hex to Decimal -h\n");
        i=-1;

        do{
          a = (int)strtol(argv[optind +i],NULL,16);
          printf(" DECIMAL :%d\n",a );
          printf(" HEXADECIMAL :%x\n",a );
          i++;
        }while(optind+i<argc && strcmp(argv[optind+i],"-d")!=0);

        break;
      case 'd':
        printf("Converter Decimal to Hex -d \n");
        i=-1;
        do{
          a = (int)strtol(argv[optind +i],NULL,10);
          printf(" HEXADECIMAL 0x%0x \n",a );
          i++;
        }while(optind+i<argc && strcmp(argv[optind+i],"-h")!=0);
        break;

       default:
        fprintf(stderr, "Usage: %s [-h or -f number] \n",argv[0]);
        exit(EXIT_FAILURE);
        }
    }


  return 0;
}
