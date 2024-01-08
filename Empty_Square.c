
///////////// Using Loops To Make Empty Square. /////////////////

#include <stdio.h>
int main() {
	int i,side,space;
	printf("Enter The Side Of Square: ");
	scanf("%d",&side);
	for (i=1; i<=side+2; i++) {
		printf(" *");
	}
	for(i=1; i<=side; i++) {
		printf("\n *");
		for(space=1; space<=side; space++) { //Space In Hollow Area

			printf("  ");
		}
		printf(" *");
	}
	printf("\n ");
	for (i=1; i<=side+2; i++) {
		printf("* ");
	}
}
