//This program is to print greatest of three numbers
#include<stdio.h>
int main()
{
	printf("Provide 3 numbers:");
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("%.2f is the greatest number",a);
		
	}
	else if(b>c)
	{
		printf("%.2f is the greatest number",b);
		
	}
	else
	{
		printf("%.2f is the greatest number",c);
	}
}
