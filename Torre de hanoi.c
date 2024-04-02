#include <stdio.h>

// Função para resolver a Torre de Hanoi as 3 pilastras
// Objetivo mover todos os Discos para pilastra oposta

void movetorre(int N, int orig, int dest, int aux) {
    
    // Mover os discos

    if (N == 1) {
        printf("Mova o disco do pilar %d para o pilar %d\n", orig, dest);
    } else {
        movetorre(N - 1, orig, aux, dest);
        printf("Mova o disco do pilar %d para o pilar %d\n", orig, dest);
        movetorre(N - 1, aux, dest, orig);
    }
}
 
int main() {

    // Número de discos

    int numerosDeDiscos = 9;

    movetorre(numerosDeDiscos, '1', '2', '3');
    return 0;
}