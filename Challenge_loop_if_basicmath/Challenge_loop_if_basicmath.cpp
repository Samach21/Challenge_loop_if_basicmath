#include <stdio.h>
#include<math.h>

int main()
{
    int a;
    int b;
    int c[100];
    float average = 0, n, SD = 0, preSD;
    int i;
    printf("Input: ");
    scanf_s("%d%d", &a, &b);
    if (a < b)
    {
        printf("Output: ");
        for (i = 0; i <= (b - a); i++)
        {
            c[i] = a + i;
            printf("%d ", c[i]);
            average = average + c[i];
        }
        n = i;
        average = average / n;
        printf("\nAverage = %f", average);
        for (i = 0; i <= (b - a); i++)
        {
            preSD = c[i];
            SD = SD + (preSD - average)*(preSD - average);
        }
        n = i - 1;
        SD = sqrt(SD / n);
        printf("\nSD = %f", SD);
    }
}