#include <stdio.h>

// Modificadores mais usados em C
// Unsigned, signed, long, short

/*

int -

int pode armazenar valores que vão de -2,147,483,648 a 2,147,483,647, 
permitindo tanto números positivos quanto negativos. 
Já um unsigned int pode armazenar apenas valores positivos, 
dobrando a faixa positiva para 0 a 4,294,967,295.

char - 

char pode armazenar valores que vão de -128 a 127. 
Já um unsigned char pode armazenar apenas valores positivos, 
permitindo um intervalo de 0 a 255. Isso é útil para armazenar caracteres de conjuntos de caracteres estendidos ou para representar dados binários.


*/

// Unsigned -> armazena apenas valores positivos, incluindo 0
// unsigned int
// unsigned char
// ./image.png

//long -> armazena valores maiores que o normal
//long long -> é longo mais que o longo
//long int a = x
//%ld ou %li, %lld ou %lli

// misturando as duas dql mudelo
//unsigned long int a = n;

//short -> armazena valores menores

int main () {

    // unsigned int

    int numeroComSinal = 3000000000; // Este valor excede o limite de um int normal
    unsigned int numeroSemSinal = 3000000000;

    printf("Number with sinal: %d pesa %d bytes\n", numeroComSinal, sizeof(numeroComSinal));
    printf("Number without sinal: %u pesa %d bytes\n", numeroSemSinal, sizeof(numeroSemSinal));

    // long int

    int numeroNormal = 2147483647; // Valor maximo de int
    long int numeroLongo = 2147483648;
    long long int numeroLongoLongo = 2147483648;

    printf("Numero normal: %d pesa %d bytes\n", numeroNormal, sizeof(numeroNormal));
    printf("Numero longo: %lld pesa %d bytes\n", numeroLongo, sizeof(numeroLongo));
    printf("Numero longo longo: %lld pesa %d bytes\n", numeroLongo, sizeof(numeroLongoLongo));

    // long double
 
    double numeroPreciso = 3.141592653589793; 
    long double numeroMuitoPreciso = 3.14159265358979323846;

    printf("Numero preciso: %f pesa %d bytes\n", numeroPreciso, sizeof(numeroPreciso));
    printf("Numero muito preciso: %f pesa %d bytes\n", numeroMuitoPreciso, sizeof(numeroMuitoPreciso)); // resultado = 0.00 no windows 

    // unsigned long int

    unsigned long int largePositiveNumber = 4000000000;
    printf("Número positivo grande: %lu pesa %d bytes\n", largePositiveNumber, sizeof(largePositiveNumber));

    // short int

    short int numeroPitoco = 32767; // 2 bytes
    printf("Numero pitoco: %d pesa %d bytes\n", numeroLongo, sizeof(numeroPitoco));




    return 0;
}