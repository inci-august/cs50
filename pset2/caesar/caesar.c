#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <cs50.h>


int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Please submit a key.\n");
        return 1;
    }
    
    int k = atoi(argv[1]);
    
    printf("plaintext: ");
    string plaintext = get_string();
    
    printf("ciphertext: ");
    for (int i = 0, slen = strlen(plaintext); i < slen;  i++) 
    {
        if (isalpha(plaintext[i]))
        {
            if (isupper(plaintext[i]))
            {
                printf("%c", ((plaintext[i] - 65) + k) % 26 + 65);
            }
            else if (islower(plaintext[i]))
            {
                printf("%c", ((plaintext[i] - 97) + k) % 26 + 97);
            }
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
    return 0;
}