#include <stdio.h>
#include <string.h>

#define NOME_MAX 50

int main() {
    char cidadeA[NOME_MAX], cidadeB[NOME_MAX];
    int populacaoA, populacaoB;

    printf("Digite o nome da primeira cidade: ");
    scanf("%s", cidadeA);
    printf("Digite a população da cidade %s: ", cidadeA);
    scanf("%d", &populacaoA);

    printf("Digite o nome da segunda cidade: ");
    scanf("%s", cidadeB);
    printf("Digite a população da cidade %s: ", cidadeB);
    scanf("%d", &populacaoB);

    printf("Comparando %s e %s:\n", cidadeA, cidadeB);
    if (populacaoA > populacaoB) {
        printf("%s tem maior população: %d\n", cidadeA, populacaoA);
        printf("A cidade vencedora é: %s\n", cidadeA);
    } else if (populacaoA < populacaoB) {
        printf("%s tem maior população: %d\n", cidadeB, populacaoB);
        printf("A cidade vencedora é: %s\n", cidadeB);
    } else {
        printf("Ambas as cidades têm a mesma população: %d\n", populacaoA);
    }

    return 0;
}