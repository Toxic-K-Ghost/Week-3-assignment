//program on mobile data cost selection
/*
Name:Kevin Kipngeno
Reg no:PA106/G/28707/25
Date:30/09/2025
Description:program on mobile data bundle purchase
*/
#include<stdio.h>
#include<math.h>

int main(){
	int units;
	float bill;
	  
	  
	printf("Enter water units consumed:");
	scanf("%d",&units);
	
	if(units<=30){
        bill=20*units;
		printf("Total water bill:%.2f",bill);	
	}
    else if(units>=31||units<=60){
		bill=25*units;
		printf("Total water bill:%.2f",bill);
	}
	else if(units>60){
		bill=30*units;
		printf("Total water bill:%.2f",bill);
	}
	
	
	return 0;

}
