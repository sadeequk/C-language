
//////////// Cone Shape IceCream Design In C Using Loops. /////////////////

#include <stdio.h>
int main()
{
	int i, j, space, Hight;
	printf("Enter The Hight Of Cone: ");
	scanf("%d",&Hight);
	if (Hight==1||Hight==2||Hight==3||Hight==4) //If Condition For Low Hight Of Cone
	{
		printf("The Cone Hight Is Very Lower.\n");
		printf("Cone Doesn't Exist :)");
	}
	else{ 
	
	for (i=4;i<=Hight;i++)
	{
		for (space=1;space<=(Hight+2)-i;space++)
		{
			printf(" ");
			
		}
		for(j=1;j<=2*i-1;j++)
		{
		printf("*");
		}
		printf("\n");
	}
	//For Lower Part Of IceCream
	for (i=Hight+2;i>=1;i--)
	{
		for (space=1;space<=(Hight+2)-i;space++)
		{
			printf(" ");
	
		}
		for(j=1;j<=2*i-1;j++)
		{
		
		printf("*");
		}
		printf("\n");
	}
	
	}
}
