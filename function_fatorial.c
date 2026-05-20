#include <stdio.h>

int calcular_fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    int resultado = 1;
    int i;
    for (i = 2; i <= n; i++) {
        resultado = resultado * i;
    }
    return resultado;
}