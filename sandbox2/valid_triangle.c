#include <stdio.h>
#include <cs50.h>

bool valid_triangle(float a, float b, float c);

int main(void)
{
    float a = get_float("A: ");
    float b = get_float("B: ");
    float c = get_float("C: ");

    valid_triangle(a, b, c)
        ? printf("The values you provided are valid\n")
        : printf("The values you provided are invalid\n");
}

bool valid_triangle(float a, float b, float c)
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        return false;
    }
    else if (a + b <= c || b + c <= a || a + c <= b)
    {
        return false;
    }
    return true;
}
