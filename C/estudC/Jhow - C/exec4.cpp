#include <stdio.h> // Necessário para printf

void swap(int *a, int *b) {
	
 int temp = *a;
 *a = *b;
 *b = temp;
 
}

int main() {
	
 int x = 10, y = 20;
 swap(&x, &y);
 printf("x = %d, y = %d\n", x, y); // Exibe x = 20, y = 10
 return 0;
 
}
