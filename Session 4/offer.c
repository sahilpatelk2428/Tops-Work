#include<stdio.h>

int main()
{
	int age;
    float orderValue;
	printf("Enter Your Age : ");
	scanf("%d",&age);
	printf("Enter Value : ");s
	scanf("%f",&orderValue);
    

    if(age >= 18 && orderValue >= 500)
    {
        printf("Eligible for Offer");
    }
    else
    {
        printf("Not Eligible");
    }
}
