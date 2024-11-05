#include<stdio.h>
#include<conio.h>
int main (){
	int math_marks, science_marks;
	
	printf("Entre math marks: ");
	scanf("%d", &math_marks);
	
	printf("Entre science marks: ");
	scanf("%d", &science_marks);
	
	float obtain_marks = (math_marks + science_marks);
	
	float percentage = (obtain_marks/200)*100;
	
	if(percentage >= 50){
		printf("you are eligible");
	if(percentage > 80){
		printf("you qualify for a scholarship");
	}
	}
	else{
		printf("you are not eligible");
	}
}