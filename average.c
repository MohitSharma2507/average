#include <Stdio.h>

int main()
{
    int size=5,a[size], sum = 0;
    float average;

    printf("ENTER INPUT\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }

    printf(" average = %f ",  sum / 10.0);

    return 0;
}
