#include <stdio.h>
int main()
{
	int a;
	int b;
	int result;
	printf("Enter 1st Number : ");
	scanf("%d",&a);
	printf("Enter 2nd Number : ");
	scanf("%d",&b);
	result =multiplication(a,b); 
	printf("%d * %d = %d\n",a,b,result);
	return 0;
}
multiplication(int i, int j)
{
	int result;
	result=i*j;
	return result;
}
