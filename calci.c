#include <stdio.h>

int main() {
    int num1, num2;
    int choice;

    printf("Select operation: \n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n 5, Square\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch(choice) {
        case 1: printf("Result: %d\n", num1 + num2); break;
        case 2: printf("Result: %d\n", num1 - num2); break;
        case 3: printf("Result: %d\n", num1 * num2); break;
        case 4: 
            if (num2 != 0) 
                printf("Result: %.2f\n", (float)num1 / num2);
            else 
                printf("Error: Division by zero\n");
            break;
        case 5:
                printf("Square = %.2f\n", a*a);
                break;
        default: printf("Invalid operation\n");
        
    }
    return 0;
}
