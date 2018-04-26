#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <cs50.h>

bool isTrue(string input);

int main(int argc, string argv[])
{
    if (argc != 2 || !isTrue(argv[1]))
    {
        printf("Usage: ./vigenere k\n");
        return 1;
    }
    
    string k = argv[1];
    
    int klen = strlen(k);
    int kpos = 0;
    
    string plaintext;
    do {
        printf("plaintext: ");
        plaintext = get_string();        
    } while (strlen(plaintext) == 0);
    
    printf("ciphertext: ");
    
    for (int i = 0, textlen = strlen(plaintext); i < textlen;  i++) 
    {
        if (isalpha(plaintext[i]))
        {
            char kchar = k[kpos];
            if (isupper(kchar)) {
                kchar -= 65;
            }
            else if (islower(kchar))
            {
               kchar -= 97; 
            }
            if (isupper(plaintext[i]))
            {
                printf("%c", (kchar + plaintext[i] - 65) % 26 + 65);
                (kpos+1 < klen) ? kpos++ : (kpos = 0);
            }
            else if (islower(plaintext[i]))
            {
                printf("%c", (kchar + plaintext[i] - 97) % 26 + 97);
                (kpos+1 < klen) ? kpos++ : (kpos = 0);
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

bool isTrue(string input)
{
    for (int l = 0, inputlen = strlen(input); l < inputlen; l++) 
    {
        if (!isalpha(input[l])) {
            return false;
        }
    }
    return true;
}
