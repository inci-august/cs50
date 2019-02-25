#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int shift(char c);

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
        if (!isalpha(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Get the key
    string str_key = argv[1];

    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");

    // Convert plaintext into ciphertext
    for (int i = 0, j = 0, n = strlen(plaintext); i < n; i++)
    {
        int key = shift(str_key[j]);

        if (isupper(plaintext[i]))
        {
            printf("%c", ((plaintext[i] - 65) + key) % 26 + 65);
            j < (strlen(str_key) - 1) ? j++ : (j = 0);
        }

        else if (islower(plaintext[i]))
        {
            printf("%c", ((plaintext[i] - 97) + key) % 26 + 97);
            j < (strlen(str_key) - 1) ? j++ : (j = 0);
        }

        else
        {
            printf("%c", plaintext[i]);
        }
    }

    printf("\n");
    return 0;
}

int shift(char c)
{
    if (islower(c))
    {
        return c - 97;
    }

    else if (isupper(c))
    {
        return c - 65;
    }

    else
    {
        return c;
    }

}
