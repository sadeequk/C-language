#include <stdio.h>
main(){
	float array[20];
	int i;
	for(i=0;i<20;i++){
		printf("Enter Your Value %d ): ",i+1);
		scanf("%f",&array[i]);
	}
	for(i=0;i<20;i++)
	{
	printf("Smallest Value in 20 Numbers Is: %.1f",array[0]);
	}
}
