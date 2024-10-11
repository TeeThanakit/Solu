#include <stdio.h>

float UserInput(int n)
{
    float sum = 0.0;
    float grades = 0.0;
    for(int i = 0; i < n ;i++)
    {
        scanf("%f",&grades);
        sum += grades;
    }

    return sum;
    // your code here
}

float CalculateAverage(int n, float summation)
{
    return (summation/n);
    //your code here
}

void DisplayAverageAndGradeClassification(float avg)
{
    //your code here
    printf("%.2f\n",avg);
     if (avg >= 90) {
        printf("A");
    } else if (avg >= 80) {
        printf("B");
    } else if (avg >= 70) {
        printf("C");
    } else if (avg >= 60) {
        printf("D");
    } else {
        printf("F");
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    float sum;
    sum = UserInput(n);
    float avg;
    avg = CalculateAverage(n, sum);

    DisplayAverageAndGradeClassification(avg);
    // printf("%f",avg);
    
    return 0;
}
