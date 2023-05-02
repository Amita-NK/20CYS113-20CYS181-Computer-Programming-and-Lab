#include<stdio.h>
int main()
{
	//Variable declaration
	double volume,rate,quantity,time;
		//Asking the user the value for the input
		printf("Enter the quantity of fluid in the bag");
		scanf("%lf",&quantity);
		printf("Enter the number of minutes it should be infused");
		scanf("%lf",&time);
		rate=(quantity)/(time/60);
		//printing the value 
		printf("The volume to be infused is %lf ml",quantity);
		printf("The rate at which the fluid is infused is %lf",rate);
}
