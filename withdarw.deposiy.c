#include<stdio.h>
void main(){
int password;
printf("enter the password");
scanf("%d",&password);
if(password<=8)
printf("device is lock");
else
printf("device is unlock");
getch();
}
