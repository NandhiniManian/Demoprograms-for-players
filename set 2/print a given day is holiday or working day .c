#include<stdio.h>
void main()
{
	char day[50];
	printf("Enter the Day:");
	scanf("%s",day);
	if((day[0]=='s')||(day[0]=='S'))
	{
		printf("\nHoliday");
	}
	else
	{
		printf("\nWorking Day");
	}
}
