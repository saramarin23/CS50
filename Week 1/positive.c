#include <cs50.h>
#include <stdio.h>

int get_positive_int(string prompt);

// The CS50 library doesn’t had a get_positive_int function, but we can write one ourselves:
int main(void)
{
    int i = get_positive_int("Positive integer: ");
    printf("%i\n", i);
}

// Prompt user for positive integer
int get_positive_int(string prompt)
{
    int n;
    do
    {
        n = get_int("%s", prompt);
    }
    while (n < 1);
    return n;
}
