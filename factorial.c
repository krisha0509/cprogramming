#include<stdio.h>
int main(){
int n,i=1;
int fact=1;
printf("Enter a number:");
scanf("%d",&n);
while(i<=n){
fact=fact*i;
i++;
}
printf("Factorial of %d=%d\n",n,fact);
return 0;
}
