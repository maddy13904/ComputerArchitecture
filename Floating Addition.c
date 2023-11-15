#include<stdio.h>
int main()
{
	float num1,num2,sum;
	printf("Enter first number:");
	scanf("%f",&num1);
	printf("\nEnter second number:");
	scanf("%f",&num2);
	sum= num1+num2;
	printf("\nThe sum of the two numbers= %.2f",sum);
	return 0;
}
