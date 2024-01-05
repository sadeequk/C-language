#include<stdio.h>
main(){
	int day;
		printf("enter the name of days\n");
	scanf("%d",&day);
	
	switch(day)
	{
		case 1:
			printf("sunday");
			break;
			case 2:
			printf("monday");
			break;
			case 3:
			printf("tuesday");
			break;
			case 4:
				printf("wednesday");
				break;	
			default:
				printf("you entered the wrong choice\n");
			
	
	}
}

