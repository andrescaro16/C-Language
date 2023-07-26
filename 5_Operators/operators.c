/* 
Addition        +
Subtraction     -
Multiplication  *   
Division        /   
Remainder       %   
Increment       ++
Decrement       --
*/

#include <stdio.h>

int main () {

    // Division with integers
    int x = 12;
    int result = x / 8;
    printf("%d\n", result);

    // Division with doubles
    double y = 12.0;
    double result1 = y / 8.0;
    printf("%lf\n", result1);

    // Increment
    int num = 1;
    printf("%d\n", ++num);
    printf("%d\n", num++);
    printf("%d\n", num);

    // Multiple operations
    int operationResult = (4 / 2) + (6 * 5) - 1;
    printf("%d\n", operationResult);

    return 0;
}
