#include <stdio.h>

void bubbleSort(int vetor[], int tamanho) {
    int temp, trocado;

    do {
        trocado = 0;

        for (int i = 0; i < tamanho - 1; i++) {
            if (vetor[i] > vetor[i + 1]) {
                // Troca os elementos se estiverem fora de ordem
                temp = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = temp;
                trocado = 1; // Sinaliza que uma troca foi feita
            }
        }
    } while (trocado); // Continua até que nenhuma troca seja feita em um passo completo

}

int main() {
    int tamanho;

    // Solicitar o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    // Declarar o vetor
    int vetor[tamanho];

    // Preencher o vetor
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    // Chamar a função de ordenação (Bubble Sort)
    bubbleSort(vetor, tamanho);

    // Exibir o vetor ordenado
    printf("Vetor Ordenado: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
