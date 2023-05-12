#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int hour = get_int("Time hour : ");
  if (hour >= 12)

  {
    printf("It's %i, have a good afternoon\n", hour);
  }
  else
  {
    printf("It's still %i, go take a rest\n", hour);
  }
}