// Uma empresa fez uma pesquisa para saber se as pessoas gostaram ou não de um
// novo produto. Um número N de pessoas de ambos os sexos foi entrevistado, e o questionário
// consistia em apenas duas perguntas: (i) o sexo do entrevistado (M/F) e (ii) sua opinião sobre o
// produto (gostou/não gostou). Escreva um programa em C que:
// a) leia as respostas contidas no questionário e armazene-as em dois arrays vinculados,
// um deles contendo a resposta para a primeira pergunta e o outro contendo a resposta
// para a segunda pergunta.
// b) determine a porcentagem de pessoas do sexo feminino que responderam que
// gostaram do produto.
// c) determine a porcentagem de pessoas do sexo masculino que responderam que não
// gostaram do produto.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;

    printf("Digite o numero de pessoas entrevistadas: ");
    scanf("%d", &N);


    char *sexo = (char *)malloc(N * sizeof(char));
    char *opiniao = (char *)malloc(N * sizeof(char));

    if (sexo == NULL || opiniao == NULL) {
    printf("Erro\n");
    return 1;
    }


    for (int i = 0; i < N; i++) {
    printf("Resposta da pessoa %d:\n", i + 1);

    printf("Sexo (M/F): ");
    scanf(" %c", &sexo[i]);

      
    printf("Opiniao sobre o produto (gostou/nao gostou): ");
    scanf(" %[^\n]", &opiniao[i]);
    }

  
    int mulheresGostaram = 0;
    int homensNaoGostaram = 0;

    for (int i = 0; i < N; i++) {
    if (sexo[i] == 'F' && opiniao[i] == "gostou") {
    mulheresGostaram++;
    }
    if (sexo[i] == 'M' && opiniao[i] == ("nao gostou")) {
    homensNaoGostaram++;
    }
    }

    float porcentagemMulheresGostaram = (float)mulheresGostaram / N * 100;
    float porcentagemHomensNaoGostaram = (float)homensNaoGostaram / N * 100;

  
    printf("\nResultados:\n");
    printf("Porcentagem de mulheres que gostaram do produto: %.2f%%\n", porcentagemMulheresGostaram);
    printf("Porcentagem de homens que não gostaram do produto: %.2f%%\n", porcentagemHomensNaoGostaram);


    free(sexo);
    free(opiniao);

    return 0;
}
//OBS: O codigo compila, mas nao funciona.

