#include<stdio.h>
int main(){
float gross,returns,discount,net;
printf("Enter gross sale:");
scanf("%f", &gross);
printf("Enter sales return:");
scanf("%f",&returns);
printf("Enter discount:");
scanf("%f",&discount);
net=gross-returns-discount;
printf("Net Sale=%f\n",net);
return 0;
}
