//This program is used to calculate electricity bill
#include<stdio.h>
int main ()
{
	printf("Enter number of units consumed in this month:");
	float units;
	scanf("%f",&units);
	printf("\n --------------------------------------------\n");
	printf("The calculation of electricity bill goes like:\n");
	printf("For 1-100 units \t 1 unit costs Rs 100\n");
	printf("For 101-250 units \t 1 unit costs Rs 300\n");
	printf("For more than 250 units \t 1 unit costs Rs 500\n");
	printf("You have consumed %f units\n",units);
	float bill;
	if(units>=1&&units<=100)
	{
		float bill = units*100.0;
		printf("The amount you should pay is Rs %f",bill);
	}
		
	else if(units>=101&&units<=250)
	{
		float bill = units*300.0;
		printf("The amount you should pay is Rs %f",bill);
	}
	else
	{
		float bill = units*500.0;
		printf("The amount you should pay is Rs %f",bill);
	}
	return 0;
	
	
		
	
}
