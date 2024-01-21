//1. Crie um tipo estruturado para armazenar dados de um funcion´ario. Uma estrutura deste tipo possui
//os seguintes campos: nome, sal´ario, identificador e cargo.
//a) Escreva uma fun¸c˜ao que receba como parˆametro o endere¸co de uma estrutura do tipo Funcionario
//e preencha seus campos com valores fornecidos pelo usu´ario via teclado.
//b) Escreva uma fun¸c˜ao que receba como parˆametro o endere¸co de uma estrutura do tipo Funcionario
//e imprima os valores dos seus campos.
//c) Implemente uma fun¸c˜ao para realizar uma altera¸c˜ao no sal´ario de uma estrutura do tipo Funcionario.

#include <stdio.h>

struct funcionario {
    char nome[50];
    float salario;
    int identificador;
    char cargo[50];
};

void dados(struct funcionario *funcionario){

    printf("Informe o nome do funcionario: ");
    scanf("%s", funcionario->nome);

    printf("Informe o salario do funcionario: ");
    scanf("%f", &funcionario->salario);

    printf("Informe o identificador do funcionario: ");
    scanf("%d", &funcionario->identificador);

    printf("Informe o cargo do funcionario: ");
    scanf("%s", funcionario->cargo);

    
}

void alt_salar(struct funcionario *funcionario, float novo_salar){

printf("Informe o novo salario: ");
scanf("%f", &novo_salar);
    funcionario->salario = novo_salar;

}

int main() {
   
struct funcionario funcionario1;

dados(&funcionario1);

float novo_salar = 0;

alt_salar(&funcionario1, novo_salar);

    printf("\nDados do funcionario:\n");
    printf("Nome: %s\n", funcionario1.nome);
    printf("Salario: %.2f\n", funcionario1.salario);
    printf("Identificador: %d\n", funcionario1.identificador);
    printf("Cargo: %s\n", funcionario1.cargo);


}  

//d) Escreva uma funcao que receba como parametro um vetor de estruturas do tipo Funcionario e
//imprima o cargo e salario do Funcionario com maior salario e o cargo e salario do funcionario
//com o menor salario.

#include <stdio.h>

struct Funcionario {
    char nome[50];
    float salario;
    int identificador;
    char cargo[50];
};

void encontrarSalariosExtremos(struct Funcionario *funcionarios, int tamanho) {
    if (tamanho <= 0) {
        printf("Erro: O vetor de funcionarios esta vazio.\n");
        return;
    }

    struct Funcionario maiorSalario = funcionarios[0];
    struct Funcionario menorSalario = funcionarios[0];

    for (int i = 1; i < tamanho; i++) {
        if (funcionarios[i].salario > maiorSalario.salario) {
            maiorSalario = funcionarios[i];
        }

        if (funcionarios[i].salario < menorSalario.salario) {
            menorSalario = funcionarios[i];
        }
    }

    printf("\nFuncionario com maior salario:\n");
    printf("Cargo: %s\n", maiorSalario.cargo);
    printf("Salario: %.2f\n", maiorSalario.salario);

    printf("\nFuncionario com menor salario:\n");
    printf("Cargo: %s\n", menorSalario.cargo);
    printf("Salario: %.2f\n", menorSalario.salario);
}

int main() {

    int numFuncionarios = 3; 

    struct Funcionario funcionarios[numFuncionarios];

    for (int i = 0; i < numFuncionarios; i++) {
        printf("\nInforme os dados do funcionario %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", funcionarios[i].nome);
        printf("Salario: ");
        scanf("%f", &funcionarios[i].salario);
        printf("Identificador: ");
        scanf("%d", &funcionarios[i].identificador);
        printf("Cargo: ");
        scanf("%s", funcionarios[i].cargo);
    }

    encontrarSalariosExtremos(funcionarios, numFuncionarios);

    return 0;
}

//OBS: Fiz dois algoritmos porque não consegui fazer a função da letra (d) no mesmo.
