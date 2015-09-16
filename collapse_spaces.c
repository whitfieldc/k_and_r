#include <stdio.h>

int main()
{
  int c, last;

  last = 'a';

  while((c = getchar()) != EOF){
    if (c == ' ')
      if (last != ' ')
        putchar(c);
    if (c != ' ')
      putchar(c);
    last = c;
  }
}

//stackoverflow method
// #include <stdio.h>

// int main()
// {
//   int c;

//   while((c = getchar()) != EOF){
//     if (c == ' '){
//       while((c = getchar()) == ' ');
//       putchar(' ');
//       if (c == EOF) break;
//     }
//     putchar(c);
//   }
// }