#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // Check if user provided 1 command-line argument
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Make sure all characters in provided argument are digits
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Convert provided string into number
    int key = atoi(argv[1]);

    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");

    // Convert plaintext into ciphertext
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {

        if (isupper(plaintext[i]))
        {
            printf("%c", ((plaintext[i] - 65) + key) % 26 + 65);
        }

        else if (islower(plaintext[i]))
        {
            printf("%c", ((plaintext[i] - 97) + key) % 26 + 97);
        }

        else
        {
          printf("%c", plaintext[i]);
        }
    }

    printf("\n");
    return 0;
}

