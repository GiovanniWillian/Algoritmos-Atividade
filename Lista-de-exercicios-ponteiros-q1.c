// Questão 1) Quais serão os valores de x, y e p ao final do trecho de código abaixo:

// int x, y, *p;
// y = 0;
// p = &y;
// x = *p;
// x = 4;
// (*p)++;
// --x;
// (*p) += x;

#include<stdio.h>
int main(){
int x, y, *p;
y = 0;
p = &y;
x = *p;
x = 4;
(*p)++;
--x;
(*p) += x;
printf("%d, %d, %d", x, y, *p);
return 0;
}

// R= x é igual a 3, y é igual a 4 e *p é igual a 4.
