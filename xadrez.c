#include <stdio.h>
#include <stdlib.h>

int main() {
    // Define o número de casas que cada peça irá se mover.
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // Variáveis contadoras para os laços.
    int i;
    int contadorWhile;
    int contadorDoWhile;

    /*
    ================================================================
    |                           TORRE                            |
    |  Simula o movimento da Torre, que se move em linha reta.   |
    |  Utiliza o laço 'for' para mover a peça 5 casas para a     |
    |  direita.                                                  |
    ================================================================
    */
    printf("--- Movimento da Torre ---\n");
    // O laço 'for' é ideal aqui, pois o número de iterações (casas) é
    // conhecido previamente.
    for (i = 0; i < casasTorre; i++) {
        // Imprime a direção do movimento a cada casa percorrida.
        printf("Direita\n");
    }
    printf("\n"); // Adiciona uma linha em branco para melhor legibilidade.

    /*
    ================================================================
    |                           BISPO                            |
    |  Simula o movimento do Bispo, que se move na diagonal.     |
    |  Utiliza o laço 'while' para mover a peça 5 casas na       |
    |  diagonal para cima e à direita.                           |
    ================================================================
    */
    printf("--- Movimento do Bispo ---\n");
    contadorWhile = 0; // Inicializa o contador do laço.
    // O laço 'while' verifica a condição antes de cada iteração.
    // Continuará executando enquanto o contador for menor que o número
    // de casas a mover.
    while (contadorWhile < casasBispo) {
        // Para representar o movimento diagonal, imprimimos a combinação
        // das duas direções.
        printf("Cima, Direita\n");
        contadorWhile++; // Incrementa o contador para a próxima iteração.
    }
    printf("\n"); // Adiciona uma linha em branco.

    /*
    ================================================================
    |                          RAINHA                            |
    |  Simula o movimento da Rainha, que pode se mover em todas  |
    |  as direções. Neste caso, simulamos 8 casas para a         |
    |  esquerda.                                                 |
    |  Utiliza o laço 'do-while'.                                |
    ================================================================
    */
    printf("--- Movimento da Rainha ---\n");
    contadorDoWhile = casasRainha; // Inicializa o contador com o total de casas.
    // O laço 'do-while' executa o bloco de código pelo menos uma vez
    // e depois verifica a condição.
    if (contadorDoWhile > 0) { // Garante que o laço só execute se o número de casas for positivo.
        do {
            // Imprime a direção do movimento.
            printf("Esquerda\n");
            contadorDoWhile--; // Decrementa o contador a cada movimento.
        } while (contadorDoWhile > 0); // A condição é verificada no final da iteração.
    }
    printf("\n"); // Adiciona uma linha em branco.

    return 0; // Indica que o programa foi executado com sucesso.
}