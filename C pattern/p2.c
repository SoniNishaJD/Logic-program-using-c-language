#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j, k;
    int n = 5;

    for (i = 1; i <= n; i++)
    {

        for (k = 1; k <= i; k++)
        {
            printf(" ");
        }

        for (j = 1; j <= (n+1) - i; j++) 
        {
            printf("* ");
        }

        printf("\n");
    }
}