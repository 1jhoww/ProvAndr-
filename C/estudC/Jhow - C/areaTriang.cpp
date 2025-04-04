#include <stdio.h>
 
void calcularAreaTriangulo(float *base, float *altura, float *area) {
    *area = (*base) * (*altura) / 2.0f;
}
 
int main() {
    float base, altura, area;
 
   
    printf("Digite o valor da base do triângulo: ");
    scanf("%f", &base);
 
    printf("Digite o valor da altura do triângulo: ");
    scanf("%f", &altura);
 
    
    calcularAreaTriangulo(&base, &altura, &area);
 
 
    printf("A área do triângulo é: %.2f\n", area);
 
    return 0;
}