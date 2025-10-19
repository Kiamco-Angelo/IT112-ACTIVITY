#include <stdio.h>

int main() {
    int choice, quantity;
    char again;
    float total = 0, price, discount = 0;
    char itemName[50];
    char vipStatus;

    printf("================================================\n");
    printf("      WELCOME TO MERCENARIES BLACK MARKET        \n");
    printf("================================================\n");

    
    printf("\nAre you a VIP Customer? (Y/N): ");
    scanf(" %c", &vipStatus);

    if (vipStatus == 'Y' || vipStatus == 'y') {
        discount = 0.10; 
        printf("\nYou are a VIP! You get a 10%% discount on all items.\n");
    } else {
        printf("\nRegular customer, no discount applied.\n");
    }

    do {
        printf("\nAvailable Equipments & Ammo With Prices:\n");
        printf("[1] Sub Machine Gun: Agram 2000 - P2500\n");
        printf("[2] Sniper: Silenced L115A1 - P1800\n");
        printf("[3] Assault Rifle: AK-47 - P2000\n");
        printf("[4] ShotGun: Armsel Striker - P2300\n");
        printf("[5] Ammo (per box) - P500\n");
        printf("[6] Exit Shop\n");

        printf("\nChoose an item to buy (1-6): ");
        scanf("%d", &choice);

        if (choice == 6) {
            break;
        }

        printf("Enter quantity: ");
        scanf("%d", &quantity);

        switch (choice) {
            case 1:
                price = 2500 * quantity;
                sprintf(itemName, "Sub Machine Gun: Agram 2000");
                break;
            case 2:
                price = 1800 * quantity;
                sprintf(itemName, "Sniper: Silenced L115A1");
                break;
            case 3:
                price = 2000 * quantity;
                sprintf(itemName, "Assault Rifle: AK-47");
                break;
            case 4:
                price = 2300 * quantity;
                sprintf(itemName, "ShotGun: Armsel Striker");
                break;
            case 5:
                price = 500 * quantity;
                sprintf(itemName, "Ammo (per box)");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
                continue;
        }

        if (discount > 0) {
            price -= price * discount;
        }

        total += price;

        printf("\nYou bought %d x %s for P%.2f\n", quantity, itemName, price);

        printf("\nDo you want to buy another item? (Y/N): ");
        scanf(" %c", &again);

    } while (again == 'Y' || again == 'y');

    printf("\n====================================\n");
    printf("          PURCHASE SUMMARY \n");
    printf("Total amount to pay: P%.2f\n", total);
    printf("Thank you for shopping! Good luck out there!\n");
    printf("====================================\n");

    return 0;
}
