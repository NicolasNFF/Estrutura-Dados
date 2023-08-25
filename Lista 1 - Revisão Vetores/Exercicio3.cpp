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
    
    // Inicializar o maior e o menor com o primeiro elemento do vetor
    int maior = vetor[0];
    int menor = vetor[0];
    
    // Encontrar o maior e o menor valor no vetor
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    
    // Exibir o maior e o menor valor
    printf("Maior Valor: %d\n", maior);
    printf("Menor Valor: %d\n", menor);
    
    return 0;
}
