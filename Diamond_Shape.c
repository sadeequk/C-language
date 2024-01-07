
////////// Loops For Creating Diamond Shape In C Language. /////////////

#include <stdio.h>
int main()
{
	int i, j, k, h;
	printf("Enter the Hight Of Diamond: ");
	scanf("%d",&h);
	if(h==1||h==2||h==3||h==4)//If Condition Used For Existance Of Shape
	{
		printf("Diamond Shape Doesn't Exist. ");
		}
	else
	{
		printf("\n");
	for(i=4;i<=h;i++){
		for(j=h;j>=i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=(i*2)-3;k++)
		{
			printf("^");
		}
		printf("\n");
		
			}
//Loops Used For Lower Body Of Shape InverseOfLoops			
for(i=h;i>=1;i--){
		for(j=h;j>=i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=(i*2)-3;k++)
		{
			printf("^");
		}
		printf("\n");
		
			}

		}	
}
