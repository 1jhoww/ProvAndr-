
#include <stdio.h>

void multi(int *a, int *b, int *resultado) { // CRIA A FUN��O, JA DECLARA OS PONTEIROS E VARIAVEIS
    
    *resultado = *a * *b; //CRIA O QUE A FUN��O VAI FAZER
}

int main() {
    int x = 10, y = 20; // DECLARA VALORES PARA OS PONTEIROS
    int resultado = 0; // DECLARA VARIAVEL

    
    multi(&x, &y, &resultado); // CHAMA A FUN��O E MOSTRA QUAIS VALORES USAR

    
    printf("O resultado da multiplica��o: %d\n", resultado); // MOSTRA O RESULTADO

    return 0;
}

