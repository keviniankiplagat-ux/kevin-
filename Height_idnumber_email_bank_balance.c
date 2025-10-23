/*
	Name:kevin ian kiplagat
Reg No:PA106/G/28724/25
	Description:program that disply height,idnumber,email and bank balance
*/
#include<stdio.h>
int main(){ 
	int id_number;
	float bank_balance,height;
	char email;
	printf("enter the height:");
	scanf("%f", &height);
	printf("enter the bank_balance:");
	scanf("%f",&bank_balance);
	printf("enter the id_number:");
	scanf("%d", &id_number);
	printf("enter the email:");
	scanf("%s",email);
	

	printf("height:%f\n",height);
	printf("bank_balance:$f\n",bank_balance);
	printf("id_number:%d\n",id_number);
	printf("email:%s\n", email);
	return 0;
}

	

