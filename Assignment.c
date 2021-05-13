#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

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

int currentYear;

int getCurrentYear(){
	time_t t = time(NULL);
	struct tm lt = *localtime(&t);
	return currentYear = lt.tm_year + 1900;
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
char ch;

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
		getCurrentYear();
		do{
			scanf("%d",&(list + i)->birthday);
			if((currentYear - list[i].birthday) > 20){
				printf("\n|SO TUOI PHAI BE HON HOAC BANG 20|\n");
				printf("\nNhap lai nam sinh: ");
			}
		}
		while((currentYear - list[i].birthday) > 20);
		printf("Diem: ");
		fflush(stdin);
		do{
			scanf("%d",&(list + i)->mark);
			if((list + i)->mark < 0 || (list + i)->mark > 10){
				printf("\n|DIEM SO PHAI TU 0 DEN 10|\n");
				printf("\nNhap lai diem so: ");
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
	if(check(list)){
		printf("\n|CHUA NHAP DANH SACH SINH VIEN|\n");
		return;
	}
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
	if(check(list)){
		printf("\n|CHUA NHAP DANH SACH SINH VIEN|\n");
		return;
	}
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
	if(check(list)){
		printf("\n|CHUA NHAP DANH SACH SINH VIEN|\n");
		return;
	}
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

void saveFile(student *list){
	if(check(list)){
		printf("\n|CHUA NHAP DANH SACH SINH VIEN|\n");
		return;
	}
	char *fileName;
	int i = 0;
	fileName = (char*)malloc(100);
	printf("Nhap ten file de luu: ");
	fflush(stdin);
	gets(fileName);
	FILE *pFile;
	pFile = fopen(fileName,"wb");
	if(pFile == NULL){
		printf("\n|KHONG THE MO FILE|\n");
		fclose(pFile);
		return;
	}
	for(i = 0 ; i < listLength ; i++){
		fwrite((char*)&list[i], sizeof(student), 1, pFile);
	}
	if(pFile != NULL){
		printf("\n|LUU FILE THANH CONG|\n");
	}
	fclose(pFile);
}

void openFile(){
	char *fileName;
	student fileData;
	fileName = (char*)malloc(100);
	printf("Nhap ten file de mo: ");
	fflush(stdin);
	gets(fileName);
	FILE *pFile;
	pFile = fopen(fileName,"rb");
	if(pFile == NULL){
		printf("\n|FILE TRONG|\n");
		fclose(pFile);
		return;
	}
	printf("\n|MO FILE THANH CONG|\n");
	listHeaders();
	while(fread((char*)&fileData, sizeof(student), 1, pFile)){
		listStudent(fileData);
	}
	fclose(pFile);
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
			printf("\n1. Nhap lieu:\n");
			list = inputStudent(list);
			outputStudent(list);
			break;
		case 2:
			printf("\n2. Sap xep SV theo diem so giam dan:\n");
			sortStudent(list);
			break;
		case 3:
			printf("\n3. Phan tich:\n");
			analyzeStudent(list);
			break;
		case 4:
			printf("\n4. Tim kiem sinh vien:\n");
			searchStudent(list);
			break;
		case 5:
			printf("\n5. Luu file\n");
			saveFile(list);
			break;
		case 6:
			printf("\n6. Mo file:\n");
			openFile();
			break;
		case 7:
			exit(0);
		default:
			printf("Lua chon khong hop le, vui long nhap lai.\n");
			break;
	}
	do{
		printf("\nBan co muon tiep tuc khong?\n - Co. (bam phim 'y', 'Y')\n - Khong. (bam phim  'n', 'N')\n - Clear man hinh. (bam 'c', 'C')\nLua chon cua ban: ");
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
			printf("\n|LUA CHON KHONG HOP LE|\n");
		}
	} while (c != 'y' || c != 'Y' || c != 'n' || c != 'N' || c != 'c' || c != 'C');
}
