#include <stdio.h>


int main(){
	int x = 10;
	int *p = &x;
	int y = 5;
	int *pp = &y;

	int aux = x;	
	x = y;
	y = aux;
	
	
	
	printf("Valor de x: %d\n", *p);
	printf("Valor de y: %d\n", *pp);
}
