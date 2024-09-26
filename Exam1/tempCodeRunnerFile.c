#include<stdio.h>

int main()
{
    int n;
    int count = 0;
    scanf("%d", &n);

    for(int i = 2; i <= n;i++)
    {
        int sum = 0;
        for(int x = 1; x < i; x++)
        {
            if(i % x == 0)
            {
                sum = sum + x;
            }
        }

        if(sum == i)
        {
            printf("%d\n",i);
            count++;
        }
    }

    if(count == 0)
    {
        printf("No perfect number.");
    }
    return 0;
}