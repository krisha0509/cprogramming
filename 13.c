#include<stdio.h>
int main(void){
int first=13;
int last=(100/13)*13;
int count=last/13;
int sum=count*(first+last)/2;
printf("Sum of numbers divisible by 13 between 1 and 100=%d\n",sum);
return 0;
}
