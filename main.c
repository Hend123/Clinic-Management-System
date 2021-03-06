#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"
#include "clinic.h"
#include <time.h>


/*****************/
/* Author: Hend and Haitham*/
/* Date: 10-11-2020*/
/* version: 1*/
/* Description: Interfaces*/
/*****************/
#include <stdio.h>
#include <stdlib.h>
#include "STD_Types.h"
#include "clinic.h"
extern Patient patient[5];
extern index;

int main(void){


	uint8 u8OptionLoc;
	printf("/*****************/\n");
	printf("\n\n");
	printf("         Clinic Management System             \n");
	printf("\n\n");
	printf("/*****************/\n\n");
	printf("Choose from the following options: \n");
    printf("1-Admin mode\n2-User mode\n");
	scanf("%d",&u8OptionLoc);

	switch(u8OptionLoc){
		case 1:{ //Admin
			uint8 u8CounterOfTrails = clinicU8EnterPassword();
				if(u8CounterOfTrails == 2){
					printf("Out Of Program.");
					return 0;
				}else{
					system("cls");
					clinicVoidShowOptions();
				}
			break;
		}
		case 2:{ //User
		    userOptions(patient ,index);
			break;
		}
	}




	return 0;
}





