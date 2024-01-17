#include <stdio.h>
int main(){
	int a;
	printf("Even Numbers are: \n");
	for(a=0;a<=20;a++){
		if(a%2!=0)
		{
			printf("%d\n",a);
		}
	}
	getch();
	return 0;
}
