#include <stdio.h>
#include <stdlib.h>

typedef struct student{
	char name[50];
	int score;
}stu;

stu list[5];

void sort(){
	int i = 0, j = 0, temp;
	for(i = 0 ; i < 5 ; i++){
		for(j = 0 ; j < 5 ; j++){
			if(list[i].score > list[j].score){
				temp = list[i].score;
				list[i].score = list[j].score;
				list[j].score = temp;
			}
		}
	}
}

void main(){
	int i = 0;
	for(i = 0; i < 5 ; i++){
		printf("\nSTUDENT %d\n",i + 1);
		printf("Student name: ");
		fflush(stdin);
		gets(list[i].name);
		printf("Score: ");
		fflush(stdin);
		scanf("%d", &list[i].score);
	}
	sort();
	printf("\n|STUDENT  |SCORE    |\n");
	for(i = 0 ; i < 3 ; i++){
		printf("|%-9s|%-9d|\n", list[i].name, list[i].score);
	}
}