#include <stdio.h>
#include <stdlib.h>

typedef struct imperialUnits{
	int yard;
	int foot;
	int inch;
}units;

units imperial[5];

void sort(){
	int i = 0, j = 0, temp;
	for(i = 0 ; i < 5 ; i++){
		for(j = 0 ; j < 5 ; j++){
			if(imperial[i].yard < imperial[j].yard){
				temp = imperial[i].yard;
				imperial[i].yard = imperial[j].yard;
				imperial[j].yard = temp;
			}
			if(imperial[i].foot < imperial[j].foot){
				temp = imperial[i].foot;
				imperial[i].foot = imperial[j].foot;
				imperial[j].foot = temp;
			}
			if(imperial[i].inch < imperial[j].inch){
				temp = imperial[i].inch;
				imperial[i].inch = imperial[j].inch;
				imperial[j].inch = temp;
			}
		}
	}
}

void main(){
	int i = 0;
	for(i = 0; i < 5 ; i++){
		printf("\nUNITS %d\n",i + 1);
		printf("Enter yard: ");
		fflush(stdin);
		scanf("%d", &imperial[i].yard);
		printf("Enter foot: ");
		fflush(stdin);
		scanf("%d", &imperial[i].foot);
		printf("Enter inch: ");
		fflush(stdin);
		scanf("%d", &imperial[i].inch);
	}
	sort();
	for(i = 0; i < 5 ; i++){
		printf("\nUNITS %d\n",i + 1);
		printf("|%d yd|%d ft|%d yd|\n", imperial[i].yard, imperial[i].foot, imperial[i].inch);
	}
}