#include <stdio.h>
void main()
{
int x,y,z,d;
printf("enter the 3 values:\n");
scanf("%d%d%d",&x,&y,&z);
d=(x*y)%z;
printf("%d",d);
}
