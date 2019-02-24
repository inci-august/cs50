// Generates a bar chart of three scores using an array

#include <cs50.h>
#include <stdio.h>

const int COUNT = 5;

void chart(int score);

int main(void)
{
    // Get scores from user
    int scores[COUNT];

    for (int i = 0; i < COUNT; i++)
    {
        scores[i] = get_int("Score %i: ", i + 1);
    }

    // Chart scores
    for (int i = 0; i < COUNT; i++)
    {
        printf("Score %i: ", i + 1);
        chart(scores[i]);
    }
}

void chart(int score)
{
    for (int i = 0; i < score; i++)
    {
        printf("#");
    }
    printf("\n");
}
