
#include<stdio.h>
#include<conio.h>


int main(){
int n=12345;//12345//1234//123/12/1/0
int x=0;
int sum=0;

while(n != 0){
    x = n % 10; 
    sum =sum+x;
    n = n / 10;   
    }

printf("sum of digit : %d",sum);
return 0;
}



