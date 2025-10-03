/*
Name:kevin ian kiplagat
Reg no:PA106/G/28724/25
Description:proram that  diplay if a customer qualify for a loan
*/
# include<stdio.h>
int main(){
int age;	
float salary;
printf("enter the customer age:");
scanf("%d",&age);
printf("enter the customer salary:");
scanf("%f",&salary);
if(age>=21,salary>=21000){
printf("congratulations you qualify for the loan");
}
else{
printf("unfortunately we are not able to offer you loan at this time");
}
return 0;
}

