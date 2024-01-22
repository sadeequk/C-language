
/////// Simple Programme For Rectangle Shape Using Loops. //////////

#include <stdio.h>
int main()
{
	int r=0;
	int c=0;
	int Length=8;

	for(r=0;r<Length;r++)
	{
		
		for(c=0;c<Length+3;c++)
		{
			if(r==0||r==Length-1||c==0||c==Length-1)
			printf("* ");
			else
			printf("   ");
		}
	    printf("\n");
	}
}
