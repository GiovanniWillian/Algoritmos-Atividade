#include<stdio.h>

typedef enum genero{
    masculino,
    feminino
}Genero;

typedef struct pessoa{
    char nome[20];
    int idade;
    Genero genero_pessoa;
}Pessoa;

void get_dados(Pessoa * pessoa){
     
    printf("Informe o nome: \n");
    scanf(" %[^\n]", pessoa->nome);
    printf("Informe a idade: \n");
    scanf("%d", &pessoa->idade); 
    printf("Informe o genero:\n 0-Masculino \n 1-Feminino");
    scanf("%d", &pessoa->genero_pessoa);
}

void imprime_pessoa(Pessoa * pessoa){
    printf("Nome: %s\n Idade: %d\n Genero: %s", pessoa->nome, pessoa->idade, pessoa->genero_pessoa==masculino? "Masculino":"Feminino");
}

int main(void){
    Pessoa pessoa1;
    get_dados(&pessoa1);
    imprime_pessoa(&pessoa1);

    return 0;
}