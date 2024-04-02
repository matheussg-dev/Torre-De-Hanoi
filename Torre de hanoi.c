#include <stdio.h>

// Função para resolver a Torre de Hanoi as 3 pilastras
// Objetivo mover todos os Discos para pilastra oposta

void movetorre(int Numero, char origem, char destino, char auxiliar, int movimentos) {
    
    // Mover os discos


    if (Numero == 1) {
        movimentos++;
        printf("Mova o disco do pilar %c para o pilar %c na jogada %i\n", origem, destino, movimentos);
    } else {
        movimentos++;
        movetorre(Numero - 1, origem, auxiliar, destino, movimentos);
        printf("Mova o disco do pilar %c para o pilar %c na jogada %i\n", origem, destino, movimentos);
        
    }
}
 
int main() {

    // Número de discos

    int numerosDeDiscos = 9;
    int movimentos = 0;

    movetorre(numerosDeDiscos, 'A', 'B', 'C', movimentos);
    
    return 0;
}
