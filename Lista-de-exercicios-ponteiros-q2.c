//Questão 2) Considere o trecho de código abaixo:

//int main(void) {
//int x, *p;
//x = 100;
//p = x;
//printf(“Valor de p = %p\tValor de *p = %d”, p, *p);
//}

//Se tentarmos compilar o programa (não o compile ainda), você acha que o compilador nos
//fornece alguma mensagem? Se sim, responda:

//a) Esta mensagem é de erro ou advertência?
//R= Erro

//b) Por que o compilador emite tal mensagem?
//R= Pela falta do "&" antes do "x" na declaração de variavel do ponteiro e por não ter o modificador (void *), que faz o endereço de memoria funcionar corretamente.

//c) Compile e execute o programa. A execução foi bem sucedida?
//R= Não

//d) Modifique o trecho de código acima, de modo que nenhuma mensagem seja emitida
//pelo compilador.

//e) Compile e execute novamente o programa. A execução foi bem sucedida?
//R= Sim

#include <stdio.h>

int main() {

    int x, *p;
    x = 100;
    p = &x;
    printf("Endereco de p = %p \t Valor de *p = %d", (void *)p, *p);
    return 0;

}

