#include <cs50.h>
#include <stdio.h>

int main(void)
{
  printf("x is ");
  float x = get_float();
  
  printf("y is ");
  float y = get_float();
  
  float z = x + y;
  printf("sum of x and y is %f\n", z);
  
  printf("sum of %f and %f is %f\n", x, y, x + y);
  
  printf("%f minus %f is %f\n", x, y, x - y);
  
  printf("%f times %f is %f\n", x, y, x * y);
  
  printf("%f divided by %f is %f\n", x, y, x / y);
}