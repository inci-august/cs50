#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("missing command-line argument\n");
        return 1; // if exit code is anything other than 0 that means there's an error
    }
    
    printf("hello, %s\n", argv[1]);
    return 0; // 0 means there is no error
}

// if the program shows you an error, to see the error code for that type
// the following into the command line 'echo $?' and it'll return the error code
