//Poblema determinar la division entera de 2 numeros dados
//Modelo IPO(entrada, procesar, mostrar)

//En un mismo podemos hacer un programa para probar y la aplicacion, sacando los aserts
#define NDEBUG  //Si esto los assert no corre

#include <cassert>
#include<iostream>
//Especificacion
//Div: N --> N/ Div(nume,denom) = { 0    si d>n
//                         {    1 + Div(num-denom,denom)   d<=n  //e.o.c
// a = Dividendo,  b = Divisor
//Dom Div = (NxN) -{0}

//Prototipo


unsigned Div(unsigned , unsigned);  //El orden no afecta, poner int solo es para referenciar   unsigned int es el nombre completo de unsinged


int main(){
    assert(Div(17,3) == 5);   //aca son argumetnos
    //assert(0/5 == 0);

    unsigned a,b;//declaracion de variable
    (std::cin>>a) >> b;
    std::cout<<Div(a,b);
}


unsigned Div(unsigned a, unsigned b){   //aca son parametros

    return (b>a) ? 0:
            1+Div(a-b,b); 
}

