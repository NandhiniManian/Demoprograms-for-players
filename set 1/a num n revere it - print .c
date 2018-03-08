#include <stdio.h>
int main(void) {
int n,sum[50],i,c=0;
printf("enter the number:\n");
scanf("%d\n",&n);
while(n!=0)
{
sum[i]=n%10;
n=n/10;i++;c++;}
for(i=0;i<c;i++)
{
printf("%d",sum[i]);
}
	return 0;
}
