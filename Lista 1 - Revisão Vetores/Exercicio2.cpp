#include <stdio.h>

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
    
    // Calcular a média dos elementos do vetor
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    
    float media = (float)soma / tamanho; // Conversão para float para obter a média decimal
    
    // Exibir a média
    printf("Média: %.2f\n", media);
    
    return 0;
}






