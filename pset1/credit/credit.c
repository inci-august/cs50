#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Get credit card number
    long number = get_long("Number: ");

    int sum1 = 0, sum2 = 0, total = 0, digits = 0;

    // Calculate first sum
    for (long i = number / 10; i > 0; i /= 100)
    {
        // Multiply every other digit by 2,
        // starting with the number's second last digit
        int temp = (i % 10) * 2;
        // Add temp's digits together
        sum1 += temp > 9 ? (temp % 10) + (temp / 10) : temp;
        digits++;
    }

    // Calculate second sum
    for (long i = number; i > 0; i /= 100)
    {
        sum2 += i % 10;
        digits++;
    }

    // Get first two digits of credit card
    long first_digits = number;

    while (first_digits > 100)
    {
        first_digits /= 10;
    }

    // Calculate total
    total = sum1 + sum2;

    // If total's last digit is not 0 print INVALID
    if (total % 10 != 0)
    {
        printf("INVALID\n");
    }
    // AMEX
    else if ((digits == 15) && (first_digits == 34 || first_digits == 37))
    {
        printf("AMEX\n");
    }
    // MASTERCARD
    else if (
        (digits == 16) &&
        (first_digits == 22 ||
         first_digits == 51 ||
         first_digits == 52 ||
         first_digits == 53 ||
         first_digits == 54 ||
         first_digits == 55))
    {
        printf("MASTERCARD\n");
    }
    // VISA
    else if ((digits == 13 || digits == 16) && (first_digits / 10 == 4))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
