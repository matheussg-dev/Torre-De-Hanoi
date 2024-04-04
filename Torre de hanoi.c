#include <stdio.h>

// Função para resolver a Torre de Hanoi com 3 pilares
// Objetivo: mover todos os discos para o pilar oposto

void movetorre(int Numero, char origem, char auxiliar, char destino, int *contador) {
    
    // Mover os discos

    if (Numero == 1) {
        printf("Mova o disco do pilar [%c] para o pilar [%c]\n", origem, destino);
        (*contador)++;
    } else {
        
        movetorre(Numero - 1, origem, auxiliar, destino, contador);
        printf("Mova o disco do pilar [%c] para o pilar [%c]\n", origem, destino);
        (*contador)++;
        
        movetorre(Numero - 1, auxiliar, destino, origem, contador);
        printf("Mova o disco do pilar [%c] para o pilar [%c]\n", origem, destino);
        (*contador)++;
    }
}

int main() {

    // Número de discos
    int disco;
    int numerosDeDiscos = disco;
    int contadorDeMovimentos = 0;

    scanf("%d", disco);

    movetorre(numerosDeDiscos, 'A', 'B', 'C', &contadorDeMovimentos);

    printf("\nTotal de movimentos: %d\n", contadorDeMovimentos);
    
    return 0;
}