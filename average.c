#include <Stdio.h>

int main()
{
    int size=5,a[size], sum = 0;
    float average;

    printf("ENTER NUMBERS\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }

    average = sum / 10.0;

    printf(" average = %f ", average);

    return 0;
}