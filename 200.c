#include<stdio.h>
int main(){
int i,n,pos=0,neg=0,zero=0;
for(i=1;i<=200;i++)
scanf("%d",&n);
if(n>0)
pos++;
else if(n<0)
neg++;
else
zero++;

printf("Postive=%d\n",pos);
printf("Negative=%d\n",neg);
printf("Zero=%d\n",zero);
return 0;
}
