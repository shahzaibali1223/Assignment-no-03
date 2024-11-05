#include<stdio.h>
#include<conio.h>
int main ()
{
	int  age; 
	float weight;
	
	printf("Entre the age:");
	scanf("%d", &age);
	
	printf("Entre the weight (in kg):");
	scanf("%f", &weight);
	
	if((age >= 18 && age <= 65) && weight >= 50 )
	{
		printf("You are eligible to donate blood");
	}
	else{
			printf("You are not eligible to donate the blood");
			
	
		}
	}
