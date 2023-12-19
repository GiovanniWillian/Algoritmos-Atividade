                LISTA DE EXERCÍCIOS - PONTEIROS

Questão 1) Quais serão os valores de x, y e p ao final do trecho de código abaixo:

int x, y, *p;
y = 0;
p = &y;
x = *p;
x = 4;
(*p)++;
--x;
(*p) += x;

===================================================================================================

R= x é igual a 3, y é igual a 4 e p é igual a 0061FF14 (Esse valor de endereço pode ser diferente).

===================================================================================================

Questão 2) Considere o trecho de código abaixo:

int main(void) {
int x, *p;
x = 100;
p = x;
printf(“Valor de p = %p\tValor de *p = %d”, p, *p);
}

Se tentarmos compilar o programa (não o compile ainda), você acha que o compilador nos
fornece alguma mensagem? Se sim, responda:
a) Esta mensagem é de erro ou advertência?
b) Por que o compilador emite tal mensagem?
c) Compile e execute o programa. A execução foi bem sucedida?
d) Modifique o trecho de código acima, de modo que nenhuma mensagem seja emitida
pelo compilador.
e) Compile e execute novamente o programa. A execução foi bem sucedida?

====================================================================================================

R= a) Erro
   b) Porque na 4º linha do codigo o ponteiro p não esta apontando um endereço.
   c) Não
   d) int main(void) {
    int x, *p;
    x = 100;
    p = &x;
    printf(“Valor de p = %x\tValor de *p = %d”, p, *p);
    }
   e) Não
   
====================================================================================================

Questão 3) Qual será a saída exibida pelo programa a seguir:

#include <stdio.h>
int main(void) {
 int a, b, c, d;
 int *p1;
 int *p2 = &a;
 int *p3 = &c;
 p1 = p2;
 *p2 = 10; 
 b = 20;
 int **pp;
 pp = &p1;
 *p3 = **pp;
 int *p4 = &d;
 *p4 = b + (*p1)++;
 printf("%d\t%d\t%d\t%d\n", a, b, c, d);
 return 0;
}

==================================================================================================

R= 10   20  10  31

==================================================================================================

Questão 4) Crie um programa para calcular a área e o perímetro de um hexágono. O seu
programa deve implementar uma função chamada calcula_hexagono que calcula a área e o
perímetro de um hexágono regular de lado l. A função deve obedecer ao seguinte protótipo:
void calcula_hexagono(float l, float *area, float *perimetro); A área e o perímetro de um
hexágono regular são dados, respectivamente, por:

A=(3l²√3)/2
P=6l
===
R=?
===
