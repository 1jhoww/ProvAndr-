#include <stdio.h>

int main(){
	int x = 10;
	int *p = &x;
	int**pp=&p;
	printf("Valor de x: %d\n", *p);
	return 0;
}
