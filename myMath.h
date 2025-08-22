#ifndef MYMATH_H_
#define MYMATH_H_

#include <iostream>
#include <climits>

typedef struct vector{
    double *vet;
    int tamanhoVet = 0;
} vec;

double somaVec(vec *vet1, vec *vet2); //Soma entre vetores
double subVec(vec *vet1, vec *vet2); //Subtração entre vetores
double multEscVec(vec *vet1, vec *vet2); //Multiplicação por escalar
double prodVetVec(vec *vet1, vec *vet2); //Produto vetorial
//int qtElementosVec(int vet1[]);
void eqDoSegundoGrau(double a, double b, double c); 
double mySqrt(double valor);


#endif
