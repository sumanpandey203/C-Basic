#include <stdio.h>
#include <conio.h>

int main (){
//	my first c programm
	
	int number;
	printf("Please enter the number to check the day \n");
	scanf("%d", &number);
	
	switch(number){

		case 1:
			printf("The Day is sunday. \n");
			break;
		case 2:
			printf("The Day is Monday. \n");
			break;
		case 3:
			printf("The Day is Tuesdsay. \n");
			break;
			
		case 4:
			printf("The Day is Wednesday. \n");
			break;
		case 5:
			printf("The Day is Thursday. \n");
			break;
			
		case 6:
			printf("The Day is Friday. \n");
			break;
			
		case 7:
			printf("The Day is saturday. \n");
			break;
			
		default:
			printf("It is invalid. \n");
			
	}
	
 int i = 1;
   
   while(i++<=5);
       printf("%d ",i++);

	return 0;
	
}
