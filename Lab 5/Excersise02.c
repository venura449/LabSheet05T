#include <stdio.h>

int main() {
    int number = 0; // Initialize to a value other than -1
    
    while (number != -1) {
        printf("Enter a number (-1 to exit): ");
        scanf("%d", &number);
        printf("%d\n", number);
    }
    
    printf("Exiting the program.\n");
    
    return 0;
}
