#include <stdio.h>
#include <stdlib.h>

#define MALLOC(type, size) malloc(size * sizeof(type));

typedef struct aluno
{
    float notas[4];
} Aluno;

float media(Aluno *aluno);

int main()
{
    Aluno *aluno = MALLOC(Aluno, 1);
    float mediaAluno = 0;

    scanf("%f %f %f %f", &aluno->notas[0], &aluno->notas[1], &aluno->notas[2], &aluno->notas[3]);

    mediaAluno = media(aluno);

    printf("Media: %.1f\n", mediaAluno);
    if (mediaAluno > 7)
    {
        printf("Aluno aprovado.\n");
    }
    else if (mediaAluno < 5)
    {
        printf("Aluno reprovado.\n");
    }
    else
    {
        printf("Aluno em exame.\n");

        float mediaFinal, notaExame = 0;
        scanf("%f", &notaExame);
        printf("Nota do exame: %.1f\n", notaExame);

        mediaFinal = (mediaAluno + notaExame) / 2;
        printf("%sMedia final: %.1f\n", mediaFinal < 5 ? "Aluno reprovado.\n" : "Aluno aprovado.\n", mediaFinal);
    }

    return (0);
}

float media(Aluno *aluno)
{
    float result = 0;
    result = ((aluno->notas[0] * 2) + (aluno->notas[1] * 3) + (aluno->notas[2] * 4) + (aluno->notas[3] * 1)) / 10;
    return result;
}