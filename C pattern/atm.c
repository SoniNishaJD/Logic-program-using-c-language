
#include<stdio.h>
#include<conio.h>


int main(){
int n=3845;
int n2000=0,n500=0,n200=0,n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0;
int x=0;

if(n >= 2000){
        n2000 = n / 2000;
        n = n % 2000;    
}
if(n >= 500){
    n500 = n / 500;
    n = n % 500;
}



printf("\n 2000 x %d ",n2000);
printf("\n 500 x %d ",n500);

return 0;
}



