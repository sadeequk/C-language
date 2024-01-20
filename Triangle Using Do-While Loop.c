 
 /////// Using Do_While Loop To Make Triangle Of ANgle 90*.///////////
 
 #include <stdio.h>
int main() {
	int row=1, column=1;
	int i;
	printf("Enter The Length Of Triangle: ");
	scanf("%d",&i);
	do{
		do{
			i--;
		}
		while(i>=row);
		column=1;
		do{
			printf("~");
			printf(" ");
			column++;
		}
		while(column<=row);
		printf(" \n");
		row++;
	}while(column<=8);
			
	getch();
	return 0;

}
