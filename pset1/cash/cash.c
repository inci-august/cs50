#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change;
    do
    {
        // Prompt user for the change owed
        change = get_float("Change owed: ");
    }
    while (change < 0);

    // Convert user's input to cents
    int cents = round(change * 100);
    int coins = 0;

    // Quarters
    while (cents > 24)
    {
        cents -= 25;
        coins++;
    }

    // Dimes
    while (cents > 9)
    {
        cents -= 10;
        coins++;
    }

    // Nickels
    while (cents > 4)
    {
        cents -= 5;
        coins++;
    }

    // Pennies
    while (cents > 0)
    {
        cents--;
        coins++;
    }

    printf("%i\n", coins);
}
