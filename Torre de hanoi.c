#include <stdio.h>

// Função para resolver a Torre de Hanoi com 3 pilares
// Objetivo: mover todos os discos para o pilar oposto

void movetorre(int Numero, char origem, char auxiliar, char destino, int *jogadas) {
    
    // Mover os discos

    if (Numero == 1) {
        printf("Mova o disco do pilar [%c] para o pilar [%c] Jogada[%i]\n", origem, destino, *jogadas);
        (*jogadas)++;
    } else {
        
        movetorre(Numero - 1, origem, auxiliar, destino, jogadas);
        printf("Mova o disco do pilar [%c] para o pilar [%c] Jogada[%i]\n", origem, destino, *jogadas);
        (*jogadas)++;
        
        movetorre(Numero - 1, auxiliar, destino, origem, jogadas);
        printf("Mova o disco do pilar [%c] para o pilar [%c] Jogada[%i]\n", origem, destino, *jogadas);
        (*jogadas)++;
    }
}

int main() {

    // Número de discos
    
    int disco;
    int numerosDeDiscos;
    int contadorDeMovimentos = 0;

    printf("Número de discos: ");
    scanf("%d", &disco);
    numerosDeDiscos = disco;

    movetorre(numerosDeDiscos, 'A', 'B', 'C', &contadorDeMovimentos);

    printf("\nTotal de movimentos: %d\n", contadorDeMovimentos);
    
    return 0;
}
