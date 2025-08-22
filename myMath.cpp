#include "myMath.h"
#include <cmath>
/*int qtElementosVec(int vet1[]){
    int tamanho = sizeof(vet1)/sizeof(int);
    return tamanho;
}

*/

double mySqrt(double valor){
    //Newton-Raphson método
    double valor2 = valor;
    double erro;
    double precisao = pow(10,-10);
    while (abs(valor - valor2*valor2) > precisao){
        valor2 = (valor2+valor/valor2)/2;
    }
    erro = valor2 - floor(valor2);
    if(erro < 0.1){
        valor2 = valor2 - erro;
    }

    return valor2;
}

void eqDoSegundoGrau(double a, double b, double c){
    
    double delta = (b*b)-(4*a*c);
    double x1 = (-b+(sqrt(delta)))/2*a;
    double x2 = (-b-(sqrt(delta)))/2*a;
    std::cout << "Valor de x1: " << x1 <<std::endl;
    std::cout << "Valor de x2: " << x2 <<std::endl;
}


int main(){
    //Testando a função do segundo grau
    // double a, b,c;

    // std::cout << "Digite o valor de a: "<< std::endl;
    // std::cin >> a;


    // std::cout << "Digite o valor de b: " <<std::endl;
    // std::cin >> b;

    // std::cout <<"Digite o valor de c: " <<std::endl;
    // std::cin >> c;

    // eqDoSegundoGrau(a,b,c);

    double a,b;
    
    std::cin >> a;
    b = mySqrt(a);
    std::cout << "Valor encontrado: "<< b << std::endl;

    return 0;
}

