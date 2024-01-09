#include<stdio.h>
main(){
	/*int a=10;
	float b=22.34545;
	char ch='A';
	printf("integer data=%d \n",a);
	printf("float data=%f \n",b);
	printf("char data=%c \n",ch);
	printf("this prints the strings \n");
	printf("%s","this also prints strings \n");*/
	
	      printf("the number 555 in various forms:\n");
	       printf("without any modifier:\n");
	        printf("[%d]\n",555);
	         printf("with_modifier:\n");
	          printf("[-%d]\n",555);
	           printf("with digits 10 as modifier:\n");
	            printf("[%10d]\n",555);
	             printf("with0 as modifier:\n");
	              printf("[%0d]\n",555);
	               printf("with 0 and digit string 10 as modifier:\n");
	                printf("[%010d]\n",555);
	                 printf("with -,and digit string 10 as modifiers:\n");
	                  printf("[%-010d]\n",555);
}
