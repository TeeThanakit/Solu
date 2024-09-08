#include <stdio.h>

int main()
{
    long long int N, M;
    long long int found_prime = 0;

    scanf("%lld", &N);
    scanf("%lld", &M);

    long long int a = 0, b = 1;

    while (a <= M)
    {
        if (a < N)
        {
            long long int temp = a;
            a = b;
            b = temp + b;
            continue;
        }

        if (a == 2)
        {
            printf("%lld\n", a);
            found_prime = 1;
        }
        else if (a > 2 && a % 2 != 0)
        {
            int is_prime = 1;
            for (long long int i = 3; i * i <= a; i += 2)
            {
                if (a % i == 0)
                {
                    is_prime = 0;
                    break;
                }
            }

            if (is_prime)
            {
                printf("%lld\n", a);
                found_prime = 1;
            }
        }

        long long int temp = a;
        a = b;
        b = temp + b;
    }

    if (!found_prime)
    {
        printf("No Output");
    }

    return 0;
}