#include <stdio.h>

// avisando o programa que a função existe
int calcular_fatorial(int n);

void main(int argc, char *argv[]) {
    int numero, resultado;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    resultado = calcular_fatorial(numero);
    printf("O fatorial de %d eh %d\n", numero, resultado);
    
    printf("Criado por Derick Ferreira Correa");
}