#include <stdio.h>

    /*
    
    Incremento = ++
    Pre-Incremento = ++a
    Pos-Incremento = a++

    Decremento = --
    Pre-Decremento = --a
    Pos-Decremento = a--
    
    */


int main (){

    int numero1 = 1, resultado;
    printf("Antes incremento %d \n", numero1);

    resultado = numero1++;

    numero1++;
    printf("Apos incremento %d \n", numero1);
    

};