// Explicitly casts chars to ints

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("String: ");
    for (int i = 0; i < strlen(s); i++)
    {
        int c = (int) s[i];
        // You can do `int c = s[i];` & get the same result
        printf("%c %i\n", s[i], c);
    }
}
