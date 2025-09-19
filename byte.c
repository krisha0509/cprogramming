#include<stdio.h>
int main(void){
double bytes;
printf("Enter number of bytes:");
scanf("%f",&bytes);
printf("KB=%f\n",bytes/1024);
printf("MB=%f\n",bytes/(1024*1024));
printf("GB=%f\n",bytes/(1024*1024*1024));
return 0;
}
