#include<stdio.h>
#include<conio.h>

void main()

{
	float blance, withdrawal_amount;
	char permit;  
	
	printf("Entre your account blance:");
	scanf("%f", &blance);
	
	printf("Entre the withdrawal_amount:");
	scanf("%f", &withdrawal_amount);
	
	if(withdrawal_amount > blance)
	{
		printf("insufficient Blance.");
	}
	else if(withdrawal_amount > 10000);{
		printf("Do you have a special withdrawal permit(Y/N)?");
		scanf("%c", &permit);
		
		if(permit == 'Y' || permit == 'y'){
			printf("Withdrawal apporved.");
		}else{
			printf("Withdrawal denied");
		}
			getch ();
	}
}