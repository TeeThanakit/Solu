#include <stdio.h>

int main()
{
    int num, max, min;

    scanf("%d", &num);

    if (num <= 0) {
        printf("Invalid input!");
        return 0;
    }

    int arr[num];

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for (int i = 1; i < num; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d", min);

    return 0;
}
