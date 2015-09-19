#include <stdio.h>

int main()
{
  int c, ascii_start;
  int char_tallies[127] = {0};

  ascii_start = 0;

  while ((c = getchar()) != EOF)
  //   if (char_tallies[c] > 0 && char_tallies[c] < 126)
  //     ++char_tallies[c];
  //   else
  //     char_tallies[c] = 1;
    ++char_tallies[c];
  putchar('\n');
  for ( ; ascii_start <= 126; ++ascii_start){
    // putchar(char_tallies[ascii_start]);
    // printf(": ");
    // putchar('\n');
    printf("%c : %d \n", ascii_start, char_tallies[ascii_start]);
    // if (char_tallies[ascii_start] > 0)
  }

}