#include<stdio.h>
void main()
{
int a,b,i,j,c=0;
printf("enter the limit values:\n");
scanf("%d%d",&a,&b);
for(i=a+1;i<b;i++)
{
for(j=1;j<b;j++)
{
if(i%j==0)
{
c++; 
}
}
if(c==2)
printf("%d",i);
}
}
