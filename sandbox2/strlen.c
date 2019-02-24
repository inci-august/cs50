#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = get_string("Name: ");
    int n = 0;
    while (s[n] != '\0')
    // \0 is the delimeter between strings in memory
    {
        n++;
    }
    printf("The length of your name is %i\n", n);
}
