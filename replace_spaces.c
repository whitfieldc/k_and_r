#include <stdio.h>

int main()
{
  int c;

  while((c = getchar()) != EOF){
    if (c == ' '){
      putchar('\\');
      putchar('b');
    }
    if (c == '\n'){
      putchar('\\');
      putchar('\\');
    }
    if (c != ' ')
      putchar(c);
  };
}