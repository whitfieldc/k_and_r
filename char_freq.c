#include <stdio.h>

int main()
{
  int c, ascii_start;
  int char_tallies[127] = {0};

  ascii_start = 33;

  while ((c = getchar()) != EOF)
    ++char_tallies[c];
  putchar('\n');
  for ( ; ascii_start <= 126; ++ascii_start){
    printf("%c : %d \n", ascii_start, char_tallies[ascii_start]);
  }

}