//Questão 2) Escreva um programa para corrigir provas de múltipla escolha. Cada prova tem N
//questões e cada questão vale 10/N pontos. Os primeiros dados a serem lidos são o número de
//questões e o gabarito da prova. Em seguida, serão lidas as respectivas respostas de um total de
//10 alunos matriculados. Calcule e mostre:
//a) a nota obtida para cada aluno;
//b) a porcentagem de aprovação, sabendo-se que a nota mínima para ser aprovado é 6.


#include<stdio.h>
#include<stdlib.h>

float calcular_nota (int N_questoes, char* gabarito, char* R_aluno) {
    float nota = 0;
    for (int i = 0; i < N_questoes; i++) {
        if (R_aluno[i] == gabarito[i]) {
            nota += 10.0 / N_questoes;
        }
    }
    return nota;
}

int main(void){
    
int N_questoes;
    printf("Numero de questoes: ");
    scanf("%d", &N_questoes);

    char* gabarito = (char*)malloc(N_questoes * sizeof(char));

    printf("Gabarito da prova: ");
    scanf("%s", gabarito);

    char** R_alunos = (char**)malloc(10 * sizeof(char*));

    for (int i = 0; i < 10; i++) {
        R_alunos[i] = (char*)malloc(N_questoes * sizeof(char));
        printf("Respostas do aluno %d: ", i + 1);
        scanf("%s", R_alunos[i]);
    }

    printf("\nNotas dos alunos:\n");
    for (int i = 0; i < 10; i++) {
        float nota_aluno = calcular_nota(N_questoes, gabarito, R_alunos[i]);
        printf("Nota do aluno %d: %.2f\n", i + 1, nota_aluno);
    }

    int aprovados = 0;
    for (int i = 0; i < 10; i++) {
        float nota_aluno = calcular_nota(N_questoes, gabarito, R_alunos[i]);
        if (nota_aluno >= 6.0) {
            aprovados++;
        }
    }

    float porcentagem_aprovacao = (aprovados / 10.0) * 100.0;
    printf("\nPorcentagem de aprovação: %.2f%%\n", porcentagem_aprovacao);

    free(gabarito);
    for (int i = 0; i < 10; i++) {
        free(R_alunos[i]);
    }
    free(R_alunos);


    return 0;
}

// O codigo compila, mas não é executado corretamente.
