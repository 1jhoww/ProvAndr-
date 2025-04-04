#include <stdio.h>
 
void 
calcularArea (int *lado, int *volume)
  { *volume = (*lado) * (*lado) * (*lado) ;}
  int main() { int lado, volume;
printf("Digite o valor do lado do cubo: "); scanf("%d", &lado);
 
calcularArea (&lado, &volume);
printf("O volume do cubo é: %d\n", volume);
  return 0;
  }