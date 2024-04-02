#include <stdio.h>

// Função para resolver a Torre de Hanoi as 3 pilastras
// Objetivo mover todos os Discos para pilastra oposta

void movetorre(int Numero, char orig, char dest, char aux) {
    
    // Mover os discos

    if (Numero == 1) {
        printf("Mova o disco do pilar %c para o pilar %c\n", orig, dest);
    } else {
        movetorre(Numero - 1, orig, aux, dest);
        printf("Mova o disco do pilar %c para o pilar %c\n", orig, dest);
        movetorre(Numero - 1, aux, dest, orig);
    }
}
 
int main() {

    // Número de discos

    int numerosDeDiscos = 9;

    movetorre(numerosDeDiscos, 'A', 'B', 'C');
    
    return 0;
}
