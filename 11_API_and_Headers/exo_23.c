#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <time.h>
#include "listmanip.h"

int main(int argc, char const *argv[]) {
  node* alpha = CreateNode(1);
  srand(time(NULL));
  size_t number= rand()%20;
  int AfterOrbefore;
  for (size_t i = 0; i < number; i++) {
    AfterOrbefore=rand()%2;
    if (AfterOrbefore==1) {
      printf("after\n");
      list_insert_after(alpha,NULL,rand()%100);
    } else {
      printf("before\n");
      list_insert_before(alpha,NULL,rand()%100);
    }
  }

  list_print(alpha);
  list_free(alpha);
  CountNode(alpha);

  return 0;
}
