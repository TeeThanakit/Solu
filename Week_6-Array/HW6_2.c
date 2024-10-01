#include <stdio.h>

int main()
{
    int n, arr[100];
    int freq[100] = {0};
    int max_freq = 0;
    int most_frequent[100];
    int most_frequent_count = 0;

    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Array is empty");
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int current = arr[i];
        int count = 0;

        if (freq[i] == 0)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[j] == current)
                {
                    count++;
                }
            }
            freq[i] = count;

            if (count > max_freq)
            {
                max_freq = count;
                most_frequent_count = 0;
                most_frequent[most_frequent_count++] = current;
            }
            else if (count == max_freq)
            {
                int already_exists = 0;
                for (int k = 0; k < most_frequent_count; k++)
                {
                    if (most_frequent[k] == current)
                    {
                        already_exists = 1;
                        break;
                    }
                }
                if (!already_exists)
                {
                    most_frequent[most_frequent_count++] = current;
                }
            }
        }
    }

    if (most_frequent_count == 1)
    {
        printf("Most frequent value: %d \n", most_frequent[0]);
    }
    else if (most_frequent_count > 1)
    {
        printf("Most frequent values: ");
        for (int i = 0; i < most_frequent_count; i++)
        {
            printf("%d ", most_frequent[i]);
        }
        printf("\n");
    }

    printf("Frequency: %d", max_freq);

    return 0;
}