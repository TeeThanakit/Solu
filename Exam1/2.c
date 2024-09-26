#include<stdio.h>

int main()
{
    int n;
    int count = 0;
    scanf("%d", &n);

    for(int i = 1; i <= n;i++)
    {
        int sum = 0;
        for(int x = 1; x < i; x++)
        {
            if(i % x == 0)
            {
                sum += x;
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

// #include <stdio.h>

// int main() {
//     int n;
//     int count = 0;
    
//     scanf("%d", &n);

//     for (int i = 2; i <= n; i += 2) 
//     {
//         int sum = 1;
        
//         for (int x = 2; x * x <= i; x++) 
//         {
//             if (i % x == 0) 
//             {
//                 sum += x; 
                
//                 if (x != i / x) 
//                 {
//                     sum += i / x;
//                 }
//             }
            
//             if (sum > i) {
//                 break;
//             }
//         }

//         if (sum == i) {
//             printf("%d\n", i);
//             count++;
//         }
//     }

//     if (count == 0) {
//         printf("No perfect number.\n");
//     }

//     return 0;
// }
