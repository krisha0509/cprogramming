#include<stdio.h>
int main(){
int m1,m2,m3;
float total,avg;
printf("Enter marks of three subjects:");
scanf("%d %d %d",&m1,&m2,&m3);
if(m1<35||m2<35||m3<35){
printf("Result:FAIL(less than 35 in one or more subjects)\n");
return 0;
}
total=m1+m2+m3;
avg=total/3;
printf("Total=%f\n",total);
printf("Average=%f\n",avg);
if(avg>=70)
printf("Grade:Distinction\n");
else if(avg>=60)
printf("Grade:First Class\n");
else if(avg>=50)
printf("Grade:Second Class\n");
else if(avg>=35)
printf("Grade:Third Class\n");
else
printf("Result:FAIL\n");
return 0;
}
