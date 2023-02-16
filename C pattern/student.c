#include<stdio.h>
#include<conio.h>

int main(){
int m1,m2,m3,total;
float per;
char grade;

printf("Enter marks 3 subject");
scanf("%d %d %d", &m1,&m2,&m3);

if( m1 >= 40 && m2 >= 40 && m3 >= 40){
    total = m1+m2+m3;
    per = total /3;
    
         if  (per > 80)   grade='A'; 
    else if  (per >60)   grade='B'; 
    else if  (per >40)   grade='C';
    else grade = '-';  
         
printf("\n\n Total : %d ",total);
printf("\n Per = %0.2f",per);
printf("\n grade = %c", grade);


}else{
    printf("Fail...");
}

return 0;

}

