#include<stdio.h>
int main(){
int i,n,value;
int largest,smallest;
printf("Enter 100 numbers:\n");
scanf("%d",&value);
largest=value;
smallest=value;
for(i=1;i<100;i++){
scanf("%d",&value);
if(value>largest){
largest=value;
}
}
printf("Largest number=%d\n",largest);
printf("Smallest number=%d\n",smallest);
return 0;
}
