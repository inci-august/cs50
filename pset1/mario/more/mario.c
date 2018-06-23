#include <cs50.h>
#include <stdio.h>

void putChars(char input, int n);

int main(void)
{
    int height = 0;
    do
    {
        height = get_int("Height: ");
    }
    while (height > 23 || height < 0);

    int pounds = 1;
    int spaces = height - 1;
    int gap = 2;

    for (int i = 0; i < height; i++)
    {
        putChars(' ', spaces);
        putChars('#', pounds);
        putChars(' ', gap);
        putChars('#', pounds);
        printf("\n");
        pounds++;
        spaces--;
    }
}

// Function to print given number of characters
void putChars(char input, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", input);
    }
}
