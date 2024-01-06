///////// Calculator On Switch Statement ///////
#include <stdio.h>
int main(){
	char operator;
	int num1, num2;
	printf("Enter Tow Numbers To Add: ");
	scanf("%d",&num1);
	printf("\n");
	scanf("%d",&num2);
	printf("Enter The Operator To Calculate: ");
	scanf("%s",&operator);
	switch(operator){
		case '+':
			printf("Addition= %d",(num1+num2));
			break;
		case '-':
			printf("Subtraction= %d",(num1-num2));
			break;
		case '*':
			printf("Product= %d",(num1*num2));
			break;
		case '/':
			printf("Division= %d",(num1/num2));
			break;
		default :
			printf("Invalid Operator");
	}
	getch();
	return 0;
}
