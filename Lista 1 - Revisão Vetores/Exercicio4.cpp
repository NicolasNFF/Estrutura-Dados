#include <stdio.h>

int main() {
    int tamanho, valorAlvo;
    
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
    
    // Solicitar o valor alvo
    printf("Digite o valor alvo: ");
    scanf("%d", &valorAlvo);
    
    // Buscar o valor no vetor
    int posicao = -1; // Inicializa com -1, indicando que o valor não foi encontrado
    
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == valorAlvo) {
            posicao = i; // Armazena a posição do valor alvo
            break; // Encerra o loop assim que o valor é encontrado
        }
    }
    
    // Exibir o resultado
    if (posicao != -1) {
        printf("Valor %d encontrado na posição %d.\n", valorAlvo, posicao);
    } else {
        printf("Valor %d não encontrado no vetor.\n", valorAlvo);
    }
    
    return 0;
}
