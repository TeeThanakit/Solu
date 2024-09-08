#include <stdio.h>
#include <math.h>

int main()
{
    int n = 0;
    double mean = 0.0, stdDev = 0.0;
    int score;
    int sum = 0;
    double sumOfSquare = 0.0;

    while (1)
    {
        scanf("%d", &score);

        if (score == -1)
        {
            break;
        }

        if (score >= 0 && score <= 100)
        {
            // printf("test\n");
            n++;
            sum = sum + score;
            sumOfSquare = sumOfSquare + pow(score, 2);
            // sumOfSquare = sumOfSquare + (score * score);
            // printf("Sum of square of %d is %f\n",score,sumOfSquare);
        }
    }

    if (n != 0)
    {
        // printf("Value of n is %d\n", n);
        // printf("Sum of square is %f\n",sumOfSquare);
        mean = (double)sum / n;
        // printf("Mean is %lf\n", mean);

        double variance;
        variance = (sumOfSquare - (n * pow(mean, 2))) / (n - 1);
        // printf("variance is %lf\n", variance);

        stdDev = sqrt(variance);
        printf("%.2lf\n", mean);
        printf("%.2lf", stdDev);
    }
    else
    {
        printf("No valid score");
    }
}