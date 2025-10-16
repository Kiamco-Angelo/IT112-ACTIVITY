#include<stdio.h>

int main(){

    float balance = 500.00;
    int choice;
    float amount;

    do {

        printf("TUNG TUNG TUNG SAHUR BANK\n");
        printf("Please Select your Transaction\n");
        printf("[1] Balance Inquiry\n");
        printf("[2] Deposit\n");
        printf("[3] Withdraw\n");
        printf("[4] Exit\n");


        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice){

            case 1:
                printf("\nYour current balance: P%.2f\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                balance += amount;
                printf("\nP%.2f deposit successfully!\n", amount);
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if (balance - amount >= 100.00)
                {
                    balance -= amount;
                    printf("\nP%.2f withdrawn successfully!\n", amount);
                } else {

                    printf("\nWithdrawal denied! You must maintain at least P100.00 in your account.");
                }
                break;
                case 4:
                    printf("Exiting...\n");
                    break;
                default:
                    printf("\nInvalid Choice. Please Try Again.\n");

        }
        if(choice != 4) {
            printf("\n");
        }
    } while (choice != 4);

    return 0;   

    
    
}