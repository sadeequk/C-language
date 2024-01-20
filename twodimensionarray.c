#include<stdio.h>
main(){
	int arr[4][4]={
		{10,20,30,50},		
	{200,100,300,400},
	{2,3,4,5},
	{22,33,44,55}
};
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("arr[%d][%d]:%d\n",i,j, arr[i][j]);
		}
	}
	
	
	
}
