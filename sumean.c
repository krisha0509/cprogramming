#include<stdio.h>
int main(){
int i;
float value,sum=0,mean;
printf("Enter 10 values:\n");
for(i=1;i<=10;i++){
scanf("%f",&value);
sum+=value;
}
mean=sum/10;
printf("Sum=%f\n",sum);
printf("Mean=%f\n",mean);
return 0;
}
