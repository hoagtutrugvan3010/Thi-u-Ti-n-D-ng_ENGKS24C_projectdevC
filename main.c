#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc,char *argv[]) {

int choose,location;
int n=4;
int count=-1;

while(choose!=3) {
	printf("=============================\n");
	printf("***___STORE MANAGEMENT___***\n");
	printf("1.Quan ly danh muc\n");
	printf("2.Quan ly san pham\n");
	printf("3.Thoat\n");
	printf("=============================\n");
	printf("Moi ban nhap lua chon cua minh:");
	scanf("%d",&choose);
	switch (choose) {
		case 1:// Quan ly danh muc
		while(choose!=7) {
				printfFunction();
				printf("Lua chon cua ban:");
				scanf("%d",&choose);
			switch (choose) {
				case 1:
					printfCategory(category,n);
					break;
				case 2:
					n++;
					addCategory(category,location,n);
					break;
				case 3:
					fixCategory(category,location,n);
					break;
				case 4:
					n--;
					deleteCategory(category,location,n);
					break;
				case 5:
					break;
				case 6:
					break;
				case 7:
					break;
			}
		}
			break;
		case 2://Quan ly san pham
			break;
		case 3://Thoat
			break;
	}
	
}



	
	return 0;
}
