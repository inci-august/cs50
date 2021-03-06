#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    if (s != NULL)
    {
        for (int i = 0, n = strlen(s); i < n; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                printf("%c", s[i] - ('a' - 'A'));
                // we could've said `s[i] - 32` instead of `s[i] - ('a' - 'A')`
            }
            else
            {
                printf("%c", s[i]);
            }
        }
        printf("\n");
    }
}
