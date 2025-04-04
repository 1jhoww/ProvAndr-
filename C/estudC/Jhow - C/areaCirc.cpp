#include <stdio.h>
#include <math.h>  
 
void calcularAreaCirculo(float *raio, float *area) {
    *area = M_PI * (*raio) * (*raio);
}
 
int main() {
    float raio, area;

    printf("Digite o valor do raio do círculo: ");
    scanf("%f", &raio);
 
   
    calcularAreaCirculo(&raio, &area);
 
   
    printf("A área do círculo é: %.2f\n", area);
 
    return 0;
}