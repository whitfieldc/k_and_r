#include <stdio.h>

int main()
{

  int c, length;

  length = 0;

  while((c = getchar()) != EOF){
    if (c != ' ' && c != '\t' && c != '\n')
      ++length;
    else {
      if (c != '\n' && length != 0)
        printf("\n");
      while (length != 0){
        printf("-");
        --length;
      }
    }
  }

  if (length != 0){
    printf("\n");
    while (length != 0){
      printf("-");
      --length;
    }
  }
  printf("\n");
}