#include<stdio.h>
#include<conio.h>
int main (){
	int units, charges;
	
	printf("Entre the unit:");
	scanf("%d", &units);
	
	if(units <= 100){
		printf("No units consumed");
	}
	else if(units >= 101 && units <= 200){
		int chanrge = units * 5;
		printf("Bill charges is %d ", charges );
	}
	else if(units >= 201 && units <= 300){
		int charge = units * 8;
		printf("Bill charges is %d", charges);
	}
	else(units > 300);
	{
	int charge = units * 10;
	printf("Bill charges is %d", charges);	
	}
}