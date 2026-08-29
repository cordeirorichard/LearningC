#include <stdio.h>

int main()
{
  FILE *fp;
  int x = 32;

  /*fp = fopen("output.txt", "w"); *Write to a file*/

   fp = stdout; /*Write to the terminal*/

  fputc('B', fp);
  fputc('\n', fp);
  fprintf(fp, "x = %d\n", x);
  fputs("Hello, world!\n", fp);
  
  fclose(fp);
}
