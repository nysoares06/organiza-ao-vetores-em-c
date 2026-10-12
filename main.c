#include <stdio.h>

// Coloca os numeros pares no inicio do vetor
// e os numeros impares no final, sem vetor auxiliar.
void pares(int vetor[], int n) {
    int temp;

    for (int i = 0; i < n; i++) {
        if (vetor[i] % 2 != 0) {
            for (int j = i + 1; j < n; j++) {
                if (vetor[j] % 2 == 0) {
                    temp = vetor[i];
                    vetor[i] = vetor[j];
                    vetor[j] = temp;
                    break;
                }
            }
        }
    }
}

int main() {
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O tamanho deve ser positivo.\n");
        return 1;
    }

    int vetor[n];

    for (int i = 0; i < n; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    pares(vetor, n);

    printf("Vetor organizado: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}
