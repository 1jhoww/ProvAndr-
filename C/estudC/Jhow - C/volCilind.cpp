#include <stdio.h>
#include <math.h>  
 
 
void calcularVolumeCilindro(double *raio, double *altura, double *volume) {
    *volume = M_PI * (*raio) * (*raio) * (*altura); 
}
 
int main() {
    double raio, altura, volume;
 
  
    printf("Digite o raio da base do cilindro: ");
    scanf("%lf", &raio);
    printf("Digite a altura do cilindro: ");
    scanf("%lf", &altura);
 
  
    calcularVolumeCilindro(&raio, &altura, &volume);
 
 
    printf("O volume do cilindro é: %.2lf\n", volume);
 
    return 0;
}