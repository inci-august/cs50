#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float change;
    
    printf("O hai! ");
    do {
        printf("How much change is owed?\n");
        change = get_float();
    } while (change < 0);
    
    int coins = 0;
    int cents = round(change * 100);
    
    while (cents > 24)
    {
        cents -= 25;
        coins++;
    }
    
    while (cents > 9)
    {
        cents -= 10;
        coins++;
    }
    
    while (cents > 4)
    {
        cents -= 5;
        coins++;
    }
    while (cents > 0)
    {
        cents--;
        coins++;
    }
    
    printf("%i\n", coins);
    
}