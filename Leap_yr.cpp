//This program is to check whether the given year is a leap year or not
#include<stdio.h>
int main()
{
	printf("Enter year:");
	int a;
	scanf("%d",&a);
	if(a%4==0)
	{
		printf("Given year,%d is a leap year",a);
	}
	else
	{
		printf("Given year,%d is not a leap year",a);
	}
}
