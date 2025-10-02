//program on mobile data cost selection
/*
Name:Kevin Kipngeno
Reg no:PA106/G/28707/25
Date:30/09/2025
Description:program on mobile data bundle purchase
*/
#include<stdio.h>

int main(){
    int option;
    int choice;


    // Menu to display to user
    printf("selsect data bundle :\n");
    printf("1:100MB @50KES\n");
    printf("2:500MB @200KES\n");
    printf("3:1GB   @350KES\n");
    printf("4:2GB   @600KES\n");
    printf("                \n");

    printf("Enter your option(1-4):");
    scanf("%d",&option);

	
   if(option==1){
        printf("You selected 100MB.cost= 50KES.\n");
   }
   
    else if(option==2){
		printf("You selected  500MB.cost= 200KES.\n");
	}
	
	if(option==3){
		printf("You selected  1GB.cost= 350KES.\n");
	}
	
    if(option==4){
	printf("You selected  2GB.cost= 600KES.\n");	
	}
	
	if(option<1||option>4){
		printf("invalid option\n");
	}
	
	return 0;
}