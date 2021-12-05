// my first edit in the GithuB
#include<stdio.h>
int main() {

	printf("Hello World \n"); 
	int c,d,age1, age;
	int num;
    char ch;
    float f;
  
    // --- Integer ---
  
    // Input the integer
    printf("Enter the integer:\n");
    scanf("%d", &num);
  
    // Output the integer
    printf("\nEntered integer is: %d\n", num);
   
	
	
	num>22 ? printf("you are voter.\n") : printf("you are not voter \n");

	c = sub (5,4);
	d = add(5,4);

	printf("%d \n\a",sub (5,4));
	printf("%d\n",d);
	

	

	
	return 0;

}

// our first addition function
add (int a,int b){
	
	int c;
	c = a + b;
	return c;	
	
}
// our first subtraction
sub (int a,int b){
	
	int c;
	c = a - b;
	return c;	
	
}
