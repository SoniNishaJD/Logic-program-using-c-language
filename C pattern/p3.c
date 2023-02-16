#include <stdio.h>
#include <conio.h>

void main()
{
    long int n = 12345;
    int x = 0;
    int a = 0;
    
    while (n>0)
    {
        a = n%10;
        n = n/10;
        x = x+a;
        if(n>0) 
        {
            x = x*10;
        }
        //printf("%d\n",n);
    }
    printf("%d",x);
}