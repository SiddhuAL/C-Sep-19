//This program is to check whether 3 numbers are equal or not
#include<stdio.h>
int main()
{
	printf("Enter 3 numbers:");
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	if(a==b&&b==c&&a==c)
	{
		printf("Given three numbers are equal");
		
	}
	else
	{
		printf("Given three numbers are not equal");
	}
}
