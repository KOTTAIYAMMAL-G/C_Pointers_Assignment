#include <stdio.h>

int main()
{
    int a[100], n;
    int *p;
    int max, min, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    p = a;
    max = *p;
    min = *p;

    for (i = 1; i < n; i++)
    {
        p++;

        if (*p > max)
            max = *p;

        if (*p < min)
            min = *p;
    }

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d", min);

    return 0;
}