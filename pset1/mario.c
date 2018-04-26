#include <cs50.h>
#include <stdio.h>

void putPounds(char input, int n);
void putSpaces(char input, int n);

int main(void)
{
    int height = 0;
    do 
    {
        printf("Height: ");
        height = get_int();
    }
    while (height > 23 || height < 0);
    
    int pounds = 2;
    int spaces = height - 1;
    for (int i = 0; i < height; i++)
    {
        putSpaces(' ', spaces);
        putPounds('#', pounds);
        printf("\n");
        pounds++;
        spaces--;
    }
}

void putPounds(char input, int n)
{
    for (int i = 0; i < n; i++) 
    {
        printf("%c", input);
    }
}

void putSpaces(char input, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", input);
    }
}