#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student{
	char name[20];
	char country[20];
	int birthday;
	int mark;
} student;

int check(student *list){
	if (list == NULL){
		return 1;
	}
	return 0;
}

void programHeaders(){
	printf("\n1. Nhap lieu |2. Sap xep SV |3. Phan tich |4. Tim sinh vien |5. Luu file |6. Mo file |7. Thoat\n");
}

void listHeaders(){
	printf("\t\tDANH SACH SINH VIEN\n");
	printf("---------------------------------------------\n");
	printf("|TEN           |QUE QUAN      |NAM SINH|DIEM|\n");
	printf("---------------------------------------------\n");
}

void listStudent(student s){
//	printf("---------------------------------------------\n");
	printf("|%-14s|%-14s|%-8d|%-4d|\n",s.name,s.country,s.birthday,s.mark);
	printf("---------------------------------------------\n");
}

int listLength = 1;
int currentYear = 2021;

student *inputStudent(student *list){
	int i = 0;
	printf("Nhap tong so sinh vien: ");
	fflush(stdin);
	scanf("%d",&listLength);
	free(list);
	list = (student*)malloc(listLength * sizeof(student));
	for(i = 0 ; i < listLength ; i++){
		printf("Nhap thong tin sinh vien %d:\n",i + 1);
		printf("Ten: ");
		fflush(stdin);
		gets((list + i)->name);
		printf("Que quan: ");
		fflush(stdin);
		gets((list + i)->country);
		printf("Nam sinh: ");
		fflush(stdin);
		do{
			scanf("%d",&(list + i)->birthday);
			if((currentYear - list[i].birthday) > 20){
				printf("So tuoi lon hon 20, vui long nhap lai: ");
			}
		}
		while((currentYear - list[i].birthday) > 20);
		printf("Diem: ");
		fflush(stdin);
		do{
			scanf("%d",&(list + i)->mark);
			if((list + i)->mark < 0 || (list + i)->mark > 10){
				printf("Diem so phai tu 0 - 10, vui long nhap lai: ");
			}
		}
		while(((list + i)->mark < 0 || (list + i)->mark > 10));
	}
	return list;
}

void outputStudent(student *list){
	listHeaders();
	int i = 0;
	for(i = 0 ; i < listLength ; i++){
		listStudent(list[i]);
	}
}

void sortStudent(student *list){
	student temp;
	int i = 0, j = 0;
	for(i = 0 ; i < listLength ; i++){
		for(int j = i + 1; j < listLength; j++){
			if(list[i].mark < list[j].mark){
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}
		}
	}
	outputStudent(list);
}

void analyzeStudent(student *list){
	int *count = (int*)malloc(listLength * sizeof(int));
	int i = 0, j = 0;
	for(i = 0 ; i < listLength ; i++){
		count[i] = 1;
	}
	for(i = 0; i < listLength ; i++){
		for(j = i + 1 ; j < listLength ; j++){
			if(count[j] > 0 && strcmp(list[i].country,list[j].country) == 0){
				count[i]++;
				count[j]--;
			}
		}
	}
	for(i = 0 ; i < listLength ; i++){
		if(count[i] > 0){
			printf(" + %d sinh vien que %s\n",count[i],list[i].country);
		}
	}
}

void searchStudent(student *list){
	int i, j, m;
	char c[20];
	printf("Nhap que quan cua sinh vien can tim: ");
	fflush(stdin);
	gets(c);
	printf("Nhap so diem thap nhat: ");
	scanf("%d",&m);
	printf("Sinh vien can tim:\n");
	printf("---------------------------------------------\n");
	for(i = 0 ; i < listLength ; i++){
		if(strcmp(list[i].country,c) == 0 && list[i].mark >= m){
			printf("|%-14s|%-14s|%-8d|%-4d|\n",list[i].name,list[i].country,list[i].birthday,list[i].mark);
			printf("---------------------------------------------\n");
		}
	}
}

void saveFile(){
}

void openFile(){
}

void main(){
	int n;
	char c;
	student *list = NULL;
	printf("\t\t\t\t\tChuong trinh quan ly SV\n");
	inputOption:
	programHeaders();
	fflush(stdin);
	printf("\nLua chon cua ban: ");
	scanf("%d",&n);
	switch(n){
		case 1:
			printf("1. Nhap lieu:\n");
			list = inputStudent(list);
			outputStudent(list);
			break;
		case 2:
			printf("2. Sap xep SV theo diem so giam dan:\n");
			sortStudent(list);
			break;
		case 3:
			printf("3. Phan tich:\n");
			analyzeStudent(list);
			break;
		case 4:
			printf("4. Tim kiem sinh vien:\n");
			searchStudent(list);
			break;
		case 5:
			saveFile();
			break;
		case 6:
			openFile();
			break;
		case 7:
			exit(0);
		default:
			printf("Lua chon khong hop le, vui long nhap lai.\n");
			break;
	}
	do{
		printf("\nBan co muon tiep tuc khong?\n - Co. (bam phim 'y', 'Y')\n - Khong. (bam phim  'n', 'N')\n - Clear man hinh. (bam 'c', 'C')\nLua chon cua ban:");
		fflush(stdin);
		scanf("%c",&c);
		if(c == 'y' || c == 'Y'){
			goto inputOption;
		}
		else if(c == 'n' || c == 'N'){
			exit(0);
		}
		else if(c == 'c' || c == 'C'){
			system("cls");
			printf("\t\t\t\t\tChuong trinh quan ly SV\n");
		}
		else{
			printf("Lua chon khong hop le, vui long nhap lai.\n");
		}
	} while (c != 'y' || c != 'Y' || c != 'n' || c != 'N' || c != 'c' || c != 'C');
}


