#include <stdio.h>
#include<math.h>

float r_preSD(float);
int a;
int b;
int c[100000000];
int i;
float average = 0, n, SD = 0, preSD;

int main()
{
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
            SD = SD + r_preSD(c[i]);
        }
        n = i - 1;
        SD = sqrt(SD / n);
        printf("\nSD = %f", SD);
    }
    else if (a > b)
    {
        printf("Output: ");
        for (i = 0; i <= (a - b); i++)
        {
            c[i] = a - i;
            printf("%d ", c[i]);
            average = average + c[i];
        }
        n = i;
        average = average / n;
        printf("\nAverage = %f", average);
        for (i = 0; i <= (a - b); i++)
        {
            SD = SD + r_preSD(c[i]);
        }
        n = i - 1;
        SD = sqrt(SD / n);
        printf("\nSD = %f", SD);
    }
    else if (a = b)
    {
        printf("Output: %d", &a);
        average = a;
        printf("\nAverage = %f", average);
        SD = 0;
        printf("\nSD = %f", SD);
    }
}

float r_preSD(float p) {
    float result;
    result = (p - average) * (p - average);
    return result;
}
