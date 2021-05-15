#include <stdio.h>
#include <stdlib.h>

typedef struct inventory{
	int item;
	char name[50];
	int rate;
	int quantity;
}inv;

inv invSystem[5];

void main(){
	int i = 0;
	int total,grandTotal;
	printf("Input inventory info\n");
	for(i = 0 ; i < 5 ; i++){
		printf("\nITEM %d\n", i + 1);
		printf("Item number: ");
		fflush(stdin);
		scanf("%d", &invSystem[i].item);
		printf("Item name: ");
		fflush(stdin);
		gets(invSystem[i].name);
		printf("Item rate: ");
		fflush(stdin);
		scanf("%d", &invSystem[i].rate);
		printf("Quantity on hand: ");
		fflush(stdin);
		scanf("%d", &invSystem[i].quantity);
	}
	for(i = 0 ; i < 5 ; i++){
		total = invSystem[i].rate * invSystem[i].quantity;
		grandTotal += total;
		printf("\nITEM %d\n",i + 1);
		printf("Item name: %s\n", invSystem[i].name);
		printf("Total price: %d\n", total);
	}
	printf("\nGRAND TOTAL: %d\n",grandTotal);
}