#include <stdio.h>

// Função para resolver a Torre de Hanoi as 3 pilastras
// Objetivo mover todos os Discos para pilastra oposta

void movetorre(int Numero, char origem, char auxiliar, char destino, double movimentos) {
    
    double jogada;
    // Mover os discos
    jogada = movimentos;

    if (Numero == 1) {
        movimentos++;
        printf("Mova o disco do pilar [%c] para o pilar [%c] na jogada %f\n", origem, destino, jogada);
    } else {
        
        movimentos++;
        movetorre(Numero - 1, origem, auxiliar, destino, movimentos);
        printf("Mova o disco do pilar [%c] para o pilar [%c] na jogada %f\n", origem, destino, jogada);
        
        movimentos++;
        movetorre(Numero - 1, auxiliar, destino, origem, movimentos);
        printf("Mova o disco do pilar [%c] para o pilar [%c] na jogada %f\n", origem, destino, jogada);
        
        movetorre(Numero - 1, destino, origem, auxiliar, movimentos);
        printf("Mova o disco do pilar [%c] para o pilar [%c] na jogada %f\n", origem, destino, jogada);
    }
}
 
int main() {

    // Número de discos

    int numerosDeDiscos = 3;
    int base = 0;

    movetorre(numerosDeDiscos, 'A', 'B', 'C', base);
    
    return 0;
}
