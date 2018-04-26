#include <cs50.h>
#include <stdio.h>

// argc = argument count
int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("hello, %s\n", argv[1]);
    }
    else 
    {
        printf("hello, world\n");
    }

}

/* when we call the program that we made like ./argv, 
 * this argv counts as the first argument passed into the main
 * function. And when we say string argv[] - this is the second
 * argument, so argc (argument count) equals 2
 */