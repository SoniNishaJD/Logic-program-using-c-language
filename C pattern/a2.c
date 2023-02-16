#include<stdio.h>
#include<conio.h>


int main(){
int sum=0;
int i;

for(i=1; i<=100; i++)
{
    if(i % 2 == 1)
    {sum = sum + i;}
}
// i=0;
// while(i<=100){
//   sum =sum+i;
//   i++;
// }


printf("sum of 1 to 100 : %d",sum);

return 0;
}



