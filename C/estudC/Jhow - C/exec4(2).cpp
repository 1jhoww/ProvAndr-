
#include <stdio.h>

void multi(int *a, int *b, int *resultado) { // CRIA A FUNÇÃO, JA DECLARA OS PONTEIROS E VARIAVEIS
    
    *resultado = *a * *b; //CRIA O QUE A FUNÇÃO VAI FAZER
}

int main() {
    int x = 10, y = 20; // DECLARA VALORES PARA OS PONTEIROS
    int resultado = 0; // DECLARA VARIAVEL

    
    multi(&x, &y, &resultado); // CHAMA A FUNÇÃO E MOSTRA QUAIS VALORES USAR

    
    printf("O resultado da multiplicação: %d\n", resultado); // MOSTRA O RESULTADO

    return 0;
}

