#include <cs50.h>
#include <stdio.h>

int main(void) 
{
  // int n = 1;
  // below code is an infinite loop
  // while (true)
  // {
  //   printf("n is %i\n", n)l
  //   n++;
  // }
  
  // below code didn't work as expected
  // for (int i = 0; i < 64; i++)
  // {
  //   printf("n is %i\n", n);
  //   n *= 2;
  // }
  
  long long n = 1;
  for (int i = 0; i < 64; i++) 
  {
    printf("n is %lld\n", n);
    n *= 2;
  }
}