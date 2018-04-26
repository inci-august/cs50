#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    string s = get_string();
    printf("%c", toupper(s[0]));
    
    for (int i = 1, slen = strlen(s);  i < slen; i++) {
        if (s[i] == ' ' && s[i++] != '\0')
        {
            printf("%c", toupper(s[i++]));            
        }
    }
    printf("\n");
}