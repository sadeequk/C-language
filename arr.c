#include<stdio.h>
void main(){
	Bilal();
}
Bilal(){
	char std[6][10];
	printf("enter your arrays entries...");
	int z;
	for(z=0;z<6;z++){
		scanf("%s",std[z]);
		printf("std is:%s",std[z]);
	}
}

