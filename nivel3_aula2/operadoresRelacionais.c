#include <stdio.h>

int main () {

    int a = 20;
    int b = 20;

    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a <= b: %d\n", a <= b);
    printf("a >= b: %d\n", a >= b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);

    printf("----------------------------------\n");

    // comparando tipos distintos

    int x = 5;
    float y = 5.0;
    char c = 'a';

    printf("x < y: %d\n", x < y);
    printf("x > y: %d\n", x > y);
    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);

    printf("x >= c: %d \n", x >= c);
    printf("O valor ASCII de %c é %d \n", c, c);

    printf("----------------------------------\n");

    // comparando dados com mudanca implicita

    float numero1 = 10.2;
    int numero2 = 10;

    printf("num1 > num2: %d\n", numero1 > numero2);
    printf("num1 > num2: %d\n", (int) numero1 == numero2); // pega apenas a parte inteira por meio do casting

    return 0;
}