#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = 0;

    // Prompt user for height
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Print a pyramid of that height
    int spaces = height - 1;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < spaces - i; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < i + 1; k++) {
            printf("#");
        }

        printf("\n");
    }
}
