#include "functions.h"
#include <stdio.h>
//logic ham
void printfFunction() {
	printf("***___Quan ly danh muc___***\n");
	printf("=============================\n");
	printf("1.Hien thi danh muc\n");
	printf("2.Them danh muc\n");
	printf("3.Sua danh muc\n");
	printf("4.Xoa danh muc \n");
	printf("5.Tim kiem danh muc\n");
	printf("6.Sap xep danh muc\n");
	printf("7.Thoat\n");
	printf("=============================\n");
}
void printfCategory(Category categorise[],int n) {
	printf("__________________________\n");
	for(int i=0;i<n;i++) {
		categories[i].id=i+1;
		printf("|%d |%s                  \n",categories[i].id,categories[i].nameCategory);
		printf("|__|______________________|\n");
	}
}
void addCategory(Category categorise[],int location,int n) {
	fflush(stdin);
	printf("Moi ban chon vi tri muon them:");
	scanf("%d",&location);
	getchar();
	if(location<0||location>n) {
		printf("Vi tri khong hop le\n");
		return ;
	} else {
		for(int i=n;i>location-1;i--) {
			strcpy(categories[i].nameCategory,categories[i-1].nameCategory);
		}
		printf("Moi nhap ten cho danh muc muon them:");
		fgets(categories[location-1].nameCategory,50,stdin);
		categories[location-1].nameCategory[strcspn(categories[location-1].nameCategory,"\n")]='\0';
	}
}
void fixCategory(Category categorise[],int location,int n){
	fflush(stdin);
	printf("Moi ban chon id muon sua:");
	scanf("%d",&location);
	getchar();
	if(location<0||location>n) {
		printf("Vi tri khong hop le\n");
		return ;
	} else {
		printf("Moi nhap ten cho danh muc muon sua:");
		fgets(categories[location-1].nameCategory,50,stdin);
		categories[location-1].nameCategory[strcspn(categories[location-1].nameCategory,"\n")]='\0';
	}
}
void deleteCategory(Category categorise[],int location,int n) {
	printf("Moi ban nhap vi tri muon xoa:");
	scanf("%d",&location);
	getchar();
	if(location<0||location>n) {
		printf("Vi tri khong hop le\n");
		return ;
	} else {
		for(int i=location-1;i<n;i++) {
			strcpy(categories[i].nameCategory,categories[i+1].nameCategory);
		}
		printf("Moi nhap ten cho danh muc muon them:");
		fgets(categories[location-1].nameCategory,50,stdin);
		categories[location-1].nameCategory[strcspn(categories[location-1].nameCategory,"\n")]='\0';
	}
}
