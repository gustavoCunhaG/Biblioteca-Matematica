#include "myMath.h"
#include <cmath>
/*int qtElementosVec(int vet1[]){
    int tamanho = sizeof(vet1)/sizeof(int);
    return tamanho;
}

*/

double myAbs(double valor){
    if(valor >= 0){
        return valor;    
     }

     return valor*(-1);
}

double myPow(double valor, double exp){
    //1 - expoente positivo: 5² = 5x5
    //2 - expoente negativo = 5^-2 = 1/5²

    if(exp >=0){
        if(exp == 0 && valor !=0) return 1;
        if(exp == 1) return valor;
        double atual = valor;
        for(int i =0;i < exp-1;i++){
            valor *= atual;   
        }
    }

    if(exp < 0){
        double expNegativo = myAbs(exp);
        if(exp == 0 && valor !=0) return 1;
        if(exp == 1) return (1/valor);
        double atual = valor;
        for(int i =0;i < expNegativo-1;i++){
            valor *= atual;   
        }

        return 1/valor;
    }
    
    return valor;
}

double mySqrt(double valor){
    //Newton-Raphson método.
    //Falta tratamento de erro.
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
    
    if(delta < 0 ){
        std::cout << "Não existe raiz negativa" <<std::endl;
        return ;
    }

    double x1 = (-b+(mySqrt(delta)))/2*a;
    double x2 = (-b-(mySqrt(delta)))/2*a;
    std::cout << "Valor de x1: " << x1 <<std::endl;
    std::cout << "Valor de x2: " << x2 <<std::endl;
}


int main(){
    //Testando a função do segundo grau
    double a, b,c;

    std::cout << "Digite o valor de a: "<< std::endl;
    std::cin >> a;


    std::cout << "Digite o valor de b: " <<std::endl;
    std::cin >> b;

    std::cout <<"Digite o valor de c: " <<std::endl;
    std::cin >> c;

    eqDoSegundoGrau(a,b,c);
}
