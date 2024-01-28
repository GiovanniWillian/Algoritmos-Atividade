//Questão 2) Escreva um programa para corrigir provas de múltipla escolha. Cada prova tem N
//questões e cada questão vale 10/N pontos. Os primeiros dados a serem lidos são o número de
//questões e o gabarito da prova. Em seguida, serão lidas as respectivas respostas de um total de
//10 alunos matriculados. Calcule e mostre:
//a) a nota obtida para cada aluno;
//b) a porcentagem de aprovação, sabendo-se que a nota mínima para ser aprovado é 6.



#include <stdio.h>
#include <stdlib.h>
void ler_questoes(int n, int *questao[],char resp);

int main(void){
    int *quest;
    quest = (int*)malloc(sizeof(int));
    if(quest == NULL){
        printf("ERRO");
        exit(1);
    }
    int n =0;
    char resp1;
    ler_questoes(n, quest, resp1);

    return 0;
}

void ler_questoes(int n, int *questao[],char resp)
{
    int i =0;
    int questao1 =  *questao[i];
    printf("Informe o numero de questoes\n");
    scanf("%d", &n);
    printf("Informe o gabarito de cada questao com respostas, 1=a, 2=b, 3=c, 4=d\n");
    for(int i = 0; i < n; i++){
        printf("Informe a resposta da questao %d \n", i + 1);
        scanf("%d", questao[i]);
        if(questao1 == 1)
        {
            getchar();
            resp == 'a';
        }
        else
        if(questao1==2)
        {
            resp == 'b';
        }
         else
        if(questao1==3)
        {
            resp == 'c';
        }
         else
        if(questao1==4)
        {
            resp == 'd';
        }
        printf("A resposta da questao %d e %c \n", i + 1, resp);
    }
}

