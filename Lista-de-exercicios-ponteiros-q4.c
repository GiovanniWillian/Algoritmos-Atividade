//Questão 4) Crie um programa para calcular a área e o perímetro de um hexágono. O seu
//programa deve implementar uma função chamada calcula_hexagono que calcula a área e o
//perímetro de um hexágono regular de lado l. A função deve obedecer ao seguinte protótipo:
//void calcula_hexagono(float l, float *area, float *perimetro); A área e o perímetro de um
//hexágono regular são dados, respectivamente, por:

//A=(3l²√3)/2
//P=6l

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void calcula_hexagono(float l, float *area, float *perimetro){
float r3 = sqrt(3);
*area = (3 * r3 * l * l) / 2;
*perimetro = l * 6;


}

int main(){
float l, area, perimetro;

printf("Informe o lado do hexagono:");
scanf("%f", &l);
calcula_hexagono(l, &area, &perimetro);

printf("%f\n", area);
printf("%f\n", perimetro);

    return 0;
}
