#include<stdio.h>
#include<conio.h>
int main (){
	int tax;
	
	printf("Entre the tax:");
	scanf("%d", &tax);
	
	if(tax <= 250000){
		printf("No tax");
	}
	else if(tax >= 250001 && tax <= 500000){
		int tax = tax * 5;
		printf("tax %d ", tax );
	}
	else if(tax >= 500001 && tax <= 1000000){
	    int tax = tax * 10;
		printf("tax %d", tax);
	}
	else(tax > 1000000);
	{
	int tax = tax * 10;
	printf("tax %d", tax);	
	}
	return 0;
}