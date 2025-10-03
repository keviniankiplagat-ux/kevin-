/*
	Name:kevin ian kiplagat
Reg No:PA106/G/28724/25
	Description:program to display mobile data purchase
*/
#include <stdio.h>
int main() {
    int choice; printf("Mobile Data Bundle Purchase\n");
    printf("1. 100 MB - KES 50\n");
    printf("2. 500 MB - KES 200\n");
    printf("3. 1 GB   - KES 350\n"); 
	 printf("4. 2 GB   - KES 600\n");
    
    
 printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

      
	 
    switch(choice) {
        case 1:
            printf("You selected 100 MB. Cost: KES 50\n");
            break;
        case 2:
            printf("You selected 500 MB. Cost: KES 200\n");
            break;
        case 3:
            printf("You selected 1 GB. Cost: KES 350\n");
            break;
        case 4:
            printf("You selected 2 GB. Cost: KES 600\n");
            break;
        default:
            printf("Invalid choice! Please select between 1 and 4.\n");
    }

    return 0;
}

