#include <stdio.h>

int main() {
    
    
    
    // Declarar os vetores A, B e Soma
    int tamanho;
    int vetorA[tamanho];
    int vetorB[tamanho];
    int vetorSoma[tamanho];
    
    // Solicitando o tamanho dos vetores
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanho);
    
    
    // Preencher o vetor A
    printf("Digite os elementos do vetor A:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetorA[i]);
    }
    
    // Preencher o vetor B
    printf("Digite os elementos do vetor B:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetorB[i]);
    }
    
    // Calcular a soma e armazenar no vetor Soma
    for (int i = 0; i < tamanho; i++) {
        vetorSoma[i] = vetorA[i] + vetorB[i];
    }
    
    // Exibir o vetor Soma
    printf("Vetor Soma: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetorSoma[i]);
    }
    
    return 0;
}
