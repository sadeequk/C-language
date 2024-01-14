#include<stdio.h>
int main(){
	int age;
	printf("enter your age");
	scanf("%d",&age);
	if(age>=18)
	printf("eligible for driving");
	else
	printf("not eligible for driving \n");
	if(age<18)
	printf("never eligible \n");
	getch();
}
