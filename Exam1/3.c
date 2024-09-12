#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int count = 1;
    for (int i = 1; i <= size; i++)
    {
        count = 'a' + i - 1;
        for (int j = 1; j <= i; j++)
        {
            if (count > 'z')
            {
                count -= 58;
            }
            printf("%c ", count);
            count += size - j;
        }
        printf("\n");
    }
}