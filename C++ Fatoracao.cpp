#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
	
	printf("Fatoracao: ");
	for (int i = 1; i <= 10; i++) {
		printf( i + "! = " + fatorial(i));
	}
	return 0;
}

int fatorial(int numero) {
	int retorno =1;
	for (int i=1; i<=numero; i++) {
		retorno*=i;
	}
	return retorno;
}
