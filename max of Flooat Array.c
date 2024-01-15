#include <stdio.h>
main()
{
	int a;
	int n;
	float array[20];
	printf("enter the value of going through in loop: ");
	scanf("%d",&n);
	for(a=0;a<=(n-1);a++)
	{
		printf("Enter You Value :");
		scanf("%f",&array[a]);
	}
	for(a=0;a<=(n-1);a++)
	{
		if(array[0]>array[a])
		{
			array[0]=array[a];
			
		}
		printf("Largest Number Is: %f",array[0]);
	}
	
}
