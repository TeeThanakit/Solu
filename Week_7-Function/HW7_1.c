#include <stdio.h>

int armstrong(int a)
{
    int original = a, sum = 0;
    int power = 0;

    // Calculate the number of digits (power)
    int temp = a;
    while (temp > 0)
    {
        power++;
        temp /= 10;
    }

    // Calculate the sum of each digit raised to the power
    temp = a;
    while (temp > 0)
    {
        int digit = temp % 10;
        int digit_power = 1;

        // Manually calculate digit^power
        for (int i = 0; i < power; i++)
        {
            digit_power *= digit;
        }

        sum += digit_power;
        temp /= 10;
    }

    return sum == original;
}

int main()
{
    int n;
    scanf("%d", &n);

    if (n >= 0)
    {
        if (armstrong(n))
        {
            printf("%d is an Armstrong number", n);
        }
        else
        {
            printf("%d is not an Armstrong number", n);
        }
    }
    else
    {
        printf("Armstrong Number cannot be negative");
    }

    return 0;
}
