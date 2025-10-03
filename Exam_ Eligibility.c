/*
    Name: kevin ian kiplagat
Reg no:PA106/G/28724/25
    Description:program thst check if a student is eligble for final exam
*/
#include <stdio.h>
int main() {
    float attendance, avg_marks;


    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    printf("Enter average marks: ");
    scanf("%f", &avg_marks);
    
    if (attendance >= 75 && avg_marks >= 40) {
        printf("Eligible for final exams.\n");
    } else {
        printf("Not eligible.\n");
    }

    return 0;
}

