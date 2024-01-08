#include<stdio.h>
int main(){
	int age;
	printf("enter age of person..");
	scanf("%d",&age);
	if(age>=18)
	printf("person is eligible for vote..");
	else
	printf("person is not eligible for vote..");
	getch();
}
