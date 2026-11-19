#include <stdio.h>

typedef struct {
    char nome[30];
    float notas[3];
} Aluno;

int main(void) {
    Aluno turma[3];
    int melhor = 0;
    float maior_media = 0.0f;

    for (int i = 0; i < 3; i++) {
        printf("Nome do aluno %d: ", i + 1);
        scanf("%29s", turma[i].nome);

        float soma = 0.0f;
        for (int j = 0; j < 3; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &turma[i].notas[j]);
            soma += turma[i].notas[j];
        }

        float media = soma / 3.0f;

        if (i == 0 || media > maior_media) {
            maior_media = media;
            melhor = i;
        }
    }

    printf("\nMaior media: %s (%.2f)\n", turma[melhor].nome, maior_media);
    return 0;
}
