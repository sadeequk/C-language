#include<stdio.h>
main(){
	float sub1,sub2,sub3,sub4,sub5;
	printf("enter the marks of urdu... \n");
	scanf("%f",&sub1);
		printf("enter the marks of english... \n");
	scanf("%f",&sub2);
		printf("enter the marks of maths... \n");
	scanf("%f",&sub3);
		printf("enter the marks of physics... \n");
	scanf("%f",&sub4);
		printf("enter the marks of chemistry... \n");
	scanf("%f",&sub5);
	float total =sub1+sub2+sub3+sub4+sub5;
	float percentage=((total/500)*100);
	printf("max.marks     obt.marks   \n");
	printf(".........");
	printf("urdu  100   %f      \n",sub1);
	printf("english  100   %f      \n",sub2);
	printf("maths  100   %f      \n",sub3);
	printf("physics  100   %f      \n",sub4);
	printf("chemistry  100   %f      \n",sub5);
    printf("total marks %f | percentage %f %%  \n",total,percentage);
    
	
	
	                   
					   	
}
