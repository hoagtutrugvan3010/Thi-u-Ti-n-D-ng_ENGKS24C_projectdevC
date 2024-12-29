#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int choice, i, j, sl;
	int choice01,choice02,choice03,choice04,choice05,choice06,choice07,choice08,choice09;
	struct List prod[100]={};
	int suatheoID;
	do{
		printMenuMain();
		scanf("%d",&choice);
		switch (choice){
			case 1:
				do{
				printMenuCase1();
				scanf("%d",&choice01);
					switch(choice01){
					case 1:
						printf("Nhap so san pham muon ban: ");
						scanf("%d",&sl);
						for(i=0;i<sl;i++){
							fflush(stdin);
							printf("Nhap ten cho san pham thu [%d]=",i+1);
							fgets(prod[i].name,sizeof(prod[i].name),stdin);
							prod[i].name[strcspn(prod[i].name,"\n")]= 0;
							printf("Nhap gia cho san pham thu [%d]=",i+1);
							scanf("%f",&prod[i].price);
							printf("Nhap so luong cho san pham thu [%d]=",i+1);
							scanf("%d",&prod[i].quantity);
							fflush(stdin);
							printf("Nhap the loai cho san pham thu [%d]=",i+1);
							fgets(prod[i].category,sizeof(prod[i].category),stdin);
							prod[i].category[strcspn(prod[i].category,"\n")]= 0;
							prod[i].id=i+1;
						}
							printf("Nhap thong tin cho san pham thanh cong!!\n");
						break;
					default :
						printf("lua chon k hop le moi nhap lai !");
						break;
					case 2:
						break;
					}
				}while(choice01!=2);
						break;
			case 2:
				do{
				printMenuCase2();
				scanf("%d",&choice02);
					switch(choice02){
					case 1:
						printf("+-------------------+---------------------+-----------------------+-----------------+------------------+\n");
    					printf("| ID                | Name                | Price                 | Category        | Quantity         |\n");
   						printf("+-------------------+---------------------+-----------------------+-----------------+------------------+\n");
    					for(i=0;i<sl;i++){
    						printf("| %-17d | %-19s | %-21f | %-15s | %-16d |\n", prod[i].id, prod[i].name, prod[i].price, prod[i].category, prod[i].quantity);
						}
   							printf("+-------------------+---------------------+-----------------------+-----------------+------------------+\n");
							printf("\n");
						break;
					default :
						printf("lua chon k hop le moi nhap lai !");
						break;
					case 2:
						break;
					}
				}while(choice02!=2);
						break;
			case 3:
				printf("Nhap Id san pham ban muon sua : ");
				scanf("%d",&suatheoID);
				if(suatheoID<0 | suatheoID>sl){
					printf("danh muc ko ton tai !");
					return 1;
				}
				for(i=0;i<sl;i++){
					if(prod[i].id==suatheoID){
						printf("Thong tin hien tai cua san pham la: ");
						printf("\n%d",prod[suatheoID].id);
						printf("\n%s",prod[suatheoID].name);
						printf("\n%.3f",prod[suatheoID].price);
						printf("\n%s",prod[suatheoID].category);
						printf("Moi ban nhap thong tin moi cho san pham: ");
						fflush(stdin);
						printf("Nhap ten moi cho san pham thu [%d]=",suatheoID);
						fgets(prod[suatheoID].name,sizeof(prod[suatheoID].name),stdin);
						printf("Nhap gia cho san pham thu [%d]=",suatheoID);
						scanf("%f",&prod[suatheoID].price);
						fflush(stdin);
						printf("Nhap the loai cho san pham thu [%d]=",suatheoID);
						fgets(prod[suatheoID].category,sizeof(prod[suatheoID].category),stdin);
						printf("Sua thong tin san pham thanh cong !!");
					}
				}
				break;
			case 4:
				
				break;
			case 5:
				break;
				
		}
		
	}while(choice!=10);
	return 0;
}
