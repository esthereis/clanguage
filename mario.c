#include <stdio.h>
#include <cs50.h>

int main(void)
{

  // int i = 0;
  // while (i < 4)
  // {
  //   printf("?\n");
  //   i++;
  // }
  // for (int i = 0; i < 4; i++)
  // {
  //   printf("?");
  // }
  // printf("\n");

  // int i = 0;
  // while (i < 3)
  // {
  //   printf("#\n");
  //   i++;
  // }

  // for (int i = 0; i < 3; i++)
  // {
  //   printf("#\n");
  // }

  int n;
  do
  {
    n = get_int("Size: ");
  } while (n < 1);

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("#");
    }
    printf("\n");
  }
}