#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char *s = get_string("Text: ");
  if (s == NULL)
  {
    return 1;
  }

  char *t = malloc(strlen(s) + 1);
  if (t == NULL)
  {
    return 1;
  }

  strcpy(t, s);

  if (strlen(t) > 0)
  {
    t[0] = toupper(t[0]);
  }

  printf("s: %s\n", s);
  printf("t: %s\n", t);

  printf("%p\n", s);
  printf("%p\n", t);

  free(t);

  return 0;
}