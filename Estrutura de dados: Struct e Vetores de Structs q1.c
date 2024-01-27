//Crie um tipo estruturado para armazenar dados de um funcionario. Uma estrutura deste tipo possui
//os seguintes campos: nome, salario, identificador e cargo.
//a) Escreva uma funcao que receba como parametro o endereco de uma estrutura do tipo Funcionario
//e preencha seus campos com valores fornecidos pelo usuario via teclado.
//b) Escreva uma funcao que receba como parametro o endereco de uma estrutura do tipo Funcionario
//e imprima os valores dos seus campos.
//c) Implemente uma funcao para realizar uma alteracao no salario de uma estrutura do tipo Funcionario.
//d) Escreva uma funcao que receba como parametro um vetor de estruturas do tipo Funcionario e
//imprima o cargo e salario do Funcionario com maior salario e o cargo e salario do funcionario
//com o menor salario.


#include<stdio.h>
#include<stdlib.h>

typedef struct funcionario{
    char nome[75];
    float salario;
    int identificador;
    char cargo[25];
}Funcionario;

void preenche_funcionario(Funcionario ** funcionarios, int *n);
void imprimir_funcionarios(Funcionario * funcionarios, int n);
void alterar_salario_funcionario(Funcionario ** funcionarios, int n);
void imprimir_funcionario_maior_menor(Funcionario * funcionarios, int n);

int main(void)
{
    Funcionario *funcionarios = (Funcionario *)malloc(sizeof(Funcionario));
    if (funcionarios == NULL)
    {
        printf("ERRO");
        exit(1);
    }
int qntfunc = 0;
char controle;
do
{
    printf("Menu\n");
    printf("[1] Preencher funcionario\n");
    printf("[2] Imprimir funcionarios\n");
    printf("[3] Alterar salario\n");
    printf("[4] Exibir maior e menor salario funcionarios\n");
    printf("[0] Sair\n");
    printf("Insira a opcao: ");
    scanf(" %c", &controle);
    switch (controle)
    {
    case '1':
        preenche_funcionario(&funcionarios, &qntfunc);
        break;
    case '2':
        imprimir_funcionarios(funcionarios, qntfunc);
        break;
    case '3':
        alterar_salario_funcionario(&funcionarios, qntfunc);
        break;
    case '4':
        imprimir_funcionario_maior_menor(funcionarios, qntfunc);
        break;
    case '0':
        printf("Obrigado por utilizar o programa!\n");
        break;
    default:
        printf("Entrada invalida\n");
        break;
    }
} while (controle != '0');
return 0;
}

void preenche_funcionario(Funcionario ** funcionarios, int *n){
    *funcionarios = (Funcionario *)realloc((*funcionarios), (++(*n)+1) * sizeof(Funcionario));
    if(*funcionarios == NULL)
    {
        printf("ERRO");
        exit(1);
    }
    printf("Insira o nome do %d funcionario: ", *n);
    scanf(" %[^\n]", (*funcionarios)[*n - 1].nome);
    printf("Insira o salario do %d funcionario: ", *n);
    scanf("%f", &(*funcionarios)[*n - 1].salario);
    (*funcionarios)[*n - 1].identificador = (*n) + 1000;
    printf("Insira o cargo do %d funcionario: ", *n);
    scanf(" %[^\n]", (*funcionarios)[*n - 1].cargo);
}

void imprimir_funcionarios(Funcionario * funcionarios, int n)
{
    for(int i = 0; i<n; i++)
    {
        printf("\nFuncionario %d\n", i + 1);
        printf("Nome: %s\n", funcionarios[i].nome);
        printf("Salario: %.1f\n", funcionarios[i].salario);
        printf("Identificador: %d\n", funcionarios[i].identificador);
        printf("Cargo: %s\n", funcionarios[i].cargo);
    }
}

void alterar_salario_funcionario(Funcionario ** funcionarios, int n){
    int idtf = 0;
    printf("Qual o identificador do funcionario que deseja alterar? ");
    scanf("%d", &idtf);
    for (int i = 0; i < n; i++){
        if((*funcionarios)[i].identificador == idtf){
            printf("Insira o novo salario: \n");
            scanf("%f", &(*funcionarios)[i].salario);
            break;
        }
    }
}

void imprimir_funcionario_maior_menor(Funcionario * funcionarios, int n){
    int menor = 0;
    int maior = 0;

    for(int i=0; i<n; i++)
    {
        if(funcionarios[i].salario<funcionarios[menor].salario)
        {
            menor = i;
        }
        if(funcionarios[i].salario>funcionarios[maior].salario)
        {
            maior = i;
        }
    }
    printf("Maior salario: %.1f\n", funcionarios[maior].salario);
    printf("Menor salario: %.1f\n", funcionarios[menor].salario);
}
