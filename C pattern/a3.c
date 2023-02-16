#include<stdio.h>
#include<conio.h>


int main(){
int sum=0;
int i=1;
int x=0;

while(x != 100){
    if(i % 2 == 1){
        sum =sum+i; x++;
        printf("%d        %d\n", x,i);
    }
    i++;
}

printf("sum of first 100 odd : %d",sum);
return 0;
}



