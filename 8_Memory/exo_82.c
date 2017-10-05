#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <assert.h>

int compare (void const *a , void const *b){
int const *pa = (int*)a;
int const *pb = (int*)b;
 return *pa-*pb;
};

int reversecompare (void const *a , void const *b){
int const *pa = (int*)a;
int const *pb = (int*)b;
 return *pb-*pa;
};
int main(int argc, char  *argv[]) {
  int num;
  int opt;
  printf(" How many number do you want to sort ?\n" );
  scanf("%d",&num );

  int *allocation=(int*)malloc(sizeof(int)*num);
  if(allocation==NULL){
    printf("OUT OF MEMORY\n" );
    assert(0);
  }
  for (int i = 0; i < num; i++) {
    printf(" Print number %d :\n",i);
    scanf("%d",&allocation[i] );
  }

  opt = getopt(argc, argv, "r::");
    switch (opt) {
      printf("dfdfdf \n");
      case 'r':
        qsort(allocation,num,sizeof(int),reversecompare);
        for (int a = 0; a < num; a++) {
          printf(" Print number %d : %d\n",a, allocation[a]);
        }
        break;
      default:
        qsort(allocation,num,sizeof(int),compare);
        for (int a = 0; a < num; a++) {
          printf(" Print number %d : %d\n",a, allocation[a]);
        }
      break;

    }

  return 0;
}
