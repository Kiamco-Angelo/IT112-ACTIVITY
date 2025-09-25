#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    printf("Enter positive number to ADD (Enter Zero or Negative Number To STOP):\n");

    while (1) {  
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num <= 0) {
            break;  
        }

        sum += num;  
    }

    printf("Total sum is: %d\n", sum);

    return 0;

}