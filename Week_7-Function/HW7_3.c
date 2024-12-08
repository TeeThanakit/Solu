#include <stdio.h>

int triangle(int size, int count)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }
    return count;
}

int main()
{
    int num;
    int size;
    int count = 1;
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < num; i++)
    {
        count = triangle(arr[i], count);
    }
}