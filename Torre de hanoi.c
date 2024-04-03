#include <stdio.h>

// Função para resolver a Torre de Hanoi as 3 pilastras
// Objetivo mover todos os Discos para pilastra oposta

void movetorre(int Numero, char origem, char auxiliar, char destino) {
    
    // Mover os discos

    if (Numero == 1) {

        printf("Mova o disco do pilar [%c] para o pilar [%c].\n", origem, destino);
        
    } else {
        
        movetorre(Numero - 1, origem, auxiliar, destino);
        printf("Mova o disco do pilar [%c] para o pilar [%c].\n", origem, destino);
        
        movetorre(Numero - 1, auxiliar, destino, origem);
        printf("Mova o disco do pilar [%c] para o pilar [%c].\n", origem, destino);
        
    }
}
 
int main() {

    // Número de discos

    int numerosDeDiscos = 3;

    movetorre(numerosDeDiscos, 'A', 'B', 'C');
    
    return 0;
}
