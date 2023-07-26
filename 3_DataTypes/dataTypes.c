/* 

int                     (4 bytes) |  %d   | -2147483648 to 2147483647
double                  (8 bytes) |  %lf  | 1.7E-308 to 1.7E+308
float                   (4 bytes) |  %f   | 3.4E-38 to 3.4E+38
char                    (1 byte)  |  %c   | -128 to 127
unsigned int            (4 bytes) |  %u   | 0 to 4294967295
long int                (4 bytes) |  %ld  | -2147483648 to 2147483647
long long int           (8 bytes) |  %lld | -(2^63) to (2^63)-1
unsigned long int       (4 bytes) |  %lu  | 0 to 4294967295
unsigned long long int  (8 bytes) |  %llu | 0 to 18446744073709551615
short int               (2 bytes) |  %hi  | -32768 to 32767
unsigned short int      (2 bytes) |  %hu  | 0 to 65535
signed char             (1 byte)  |  %c   | -128 to 127
unsigned char           (1 byte)  |  %c   | 0 to 255
long double             (12 bytes)|  %Lf  | 3.4E-4932 to 1.1E+4932
_Bool                   (1 byte)  |  %d   | 0 to 1

*/

#include <stdio.h>

int main() {

    double number = 15.45;
    float number1 = 8.9f;

    printf("%.2lf\n", number);
    printf("%.1f\n", number1);  

    // Scientific notation
    double notation = 2e2;
    printf("Notation: %lf\n", notation);

    // Characters
    char letter = 'A';
    printf("Letter: %c\n", letter);
    printf("Letter in the storage: %d\n", letter);

    // Size of data types
    printf("Size of int: %zu\n", sizeof(int));
    printf("Size of double: %zu\n", sizeof(double));

    return 0;
}