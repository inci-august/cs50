#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string();
    if (s != NULL)
    {
        for (int i = 0, n = strlen(s); i < n; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                printf("%c", s[i] - 32); 
                // we could've said s[i] - ('a' - 'A') instead of s[i] - 32
            }
            else
            {
                printf("%c", s[i]);
            }
        }
        printf("\n");
    }
}