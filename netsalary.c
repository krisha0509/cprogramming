#include<stdio.h>
int main(){
float gross,allowance,deduction,netsal;
printf("Enter gross salary:");
scanf("%f",&gross);
if(gross>10000){
allowance=gross*0.10;
deduction=gross*0.03;
}
else if(gross>5000){
allowance=gross*0.07;
deduction=gross*0.02;
}
else{
allowance=gross*0.05;
deduction=gross*0.01;
}
netsal=gross+allowance-deduction;
printf("Net Salary=%f\n",netsal);
return 0;
}
