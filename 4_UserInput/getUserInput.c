#include <stdio.h>

int main () {

    int number;
    char letter;
    double decimal;
    
    printf("Enter an int: ");
    scanf("%d", &number);

    printf("\nEnter a letter: ");
    scanf(" %c", &letter);

    printf("\nEnter a decimal: ");
    scanf("%lf", &decimal);

    printf("\nNumber: %d\n", number);
    printf("Letter: %c\n", letter);
    printf("Decimal: %lf\n", decimal);


    // All in one line
    printf("\n(All in one line) Enter an int, a letter, and a decimal: ");
    scanf("%d %c %lf", &number, &letter, &decimal);
    printf("\nNumber: %d\n", number);
    printf("Letter: %c\n", letter);
    printf("Decimal: %lf\n", decimal);

    return 0;
}