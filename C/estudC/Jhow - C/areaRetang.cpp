#include <stdio.h>
 
void calcularArea(int *largura, int *altura, int *area) {
    *area = (*largura) * (*altura);
}
 
int main() {
    int largura, altura, area;

    printf("Digite a largura do retângulo: ");
    scanf("%d", &largura);
    printf("Digite a altura do retângulo: ");
    scanf("%d", &altura);
 
    
    calcularArea(&largura, &altura, &area);
 
   
    printf("A área do retângulo é: %d\n", area);
 
    return 0;
}