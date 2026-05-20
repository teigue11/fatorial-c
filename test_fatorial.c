#include <stdio.h>

int calcular_fatorial(int n);

int main() {
    printf("Testando 0!: %d (Esperado: 1)\n", calcular_fatorial(0));
    printf("Testando 1!: %d (Esperado: 1)\n", calcular_fatorial(1));
    printf("Testando 6!: %d (Esperado: 720)\n", calcular_fatorial(6));
    
    printf("Criado por Derick Ferreira Correa");
    return 0;
}