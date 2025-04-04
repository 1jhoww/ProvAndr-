#include <stdio.h> // Necessário para printf

void swap(int *p, int *s) {
	
 int temp = *p;
 *p = *s;
 *s = temp;
 
}


int main() {

 int x = 10;
 int *p = &x;
 int **pp = &p;
 int y = 5;
 int *s = &y; 
 int **ss = &s;
 swap(&y, &x);
  printf("x = %d, y = %d\n", *p, *s); // Exibe x = 20, y = 10
 return 0;
 
}
