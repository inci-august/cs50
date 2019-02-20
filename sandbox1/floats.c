#include <cs50.h>
#include <stdio.h>

int main(void)
{
  // Prompt user for x
  float x = get_float("x: ");

  // Prompt user for y
  float y = get_float("y: ");

  // Perform division
  printf("x / y = %f\n", x / y);   // 0.200000
  printf("x / y = %.7f\n", x / y); // 0.2000000 (7 decimal places)
}
