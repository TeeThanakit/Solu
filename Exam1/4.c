#include <stdio.h>
#include <math.h>

int main()
{
    long long int rows, cols;

    scanf("%lld", &rows);
    scanf("%lld", &cols);

    for (long long int i = 0; i < rows; i++)
    {
        for (long long int j = 0; j < cols; j++)
        {
            long long int fact_row = 1;
            long long int fact_col = 1;
            long long int sum;
            int is_prime = 1;

            for (long long int k = 1; k <= i; k++)
            {
                fact_row *= k;
            }

            for (long long int k = 1; k <= j; k++)
            {
                fact_col *= k;
            }

            sum = fact_row + fact_col;

            if (sum <= 1)
            {
                is_prime = 0;
            }
            else
            {
                for (long long int k = 2; k <= (long long int)sqrt(sum); k++)
                {
                    if (sum % k == 0)
                    {
                        is_prime = 0;
                        break;
                    }
                }
            }

            if (is_prime)
            {
                printf("%lld\t", -sum);
            }
            else
            {
                printf("%lld\t", sum);
            }
        }
        printf("\n");
    }

    return 0;
}