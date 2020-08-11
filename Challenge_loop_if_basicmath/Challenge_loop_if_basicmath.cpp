#include <stdio.h>

int main()
{
    int n[8] = { 5, 10, 15, 20, 25, 30, 35, 40 };

    int i;
    for (i = 0; i < 8; i++)
    {
        printf("%d, ", n[i]);
    }

    printf("\n");

    for (i = 7; i >= 0; i--)
    {
        printf("%d, ", n[i]);
    }
    return 0;
}