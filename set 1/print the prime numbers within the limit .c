#include<stdio.h>
void main()
{
int a,b,i,j,c=0,m=0;
printf("enter the limit values:\n");
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
c=0;
for(j=2;j<a;j++)
{
if(i%j==0)
{
c++; 
}
}
if(c==0)
m++;
}printf("%d",m);
}
