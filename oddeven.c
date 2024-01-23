#include<stdio.h>
main(){
	int i,n;
	printf("\n enter a number");
	scanf("%d",&n);
	printf("\n even numbers are :");
	for(i=2;i<=n;i=i+2)
	{
		printf("\n %d",i);
	}
	printf("\n odd numbers are :");
	for(i=1;i<=n;i=i+2)
	{
		printf("\n %d",i);
	}
	
	   /*     int num,count=1;
	        printf("enter a number\n");
	        scanf("%d",&num);
	        printf("\nmultiplication table for %d is:\n \n",num);
	        while(count<=10)
	        {
	        	printf("%d * %d=%d \n",num,count,(num*count));
	        	count++;
			}*/
		/*	int day;
			printf("enter the number of days... \n");
			scanf("%d",&day);
			switch(day)
			{
				case 1:
					printf("sunday... \n");
					break;
					case 2:
					printf("monday... \n");
					break;
					case 3:
					printf("tuesday... \n");
					break;
					case 4:
					printf("wednesday... \n");
					break;
					case 5:
					printf("thurday... \n");
					break;
					case 6:
					printf("friday... \n");
					break;
					case 7:
					printf("saturday... \n");
					break;
					default:
						printf("enter the coorect option... \n");
			}*/
}
