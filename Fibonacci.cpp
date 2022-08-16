#include <cassert>
#include <iostream>

//Especificacion
//La recursividad para la especificacion esta bien, pero para la implementacion falla
//Fibonacci: N-->N/Fibonacci(n)={ n  si n<2
//                              { Fibonacci(n-1) + Fibonacci(n-2)  e.o.c

                              //  {
//
//
//Prototipo
int Fibonacci(int);


int main(){

    std::cout<<Fibonacci(230);
    assert(Fibonacci(1)==1);
    assert(Fibonacci(2)==1);
    assert(Fibonacci(3)==2);
    assert(Fibonacci(6)==8);
    return 0;
}

//Si es exponencial el problema de una funcion tarda nas

//ACa tarda en enconctrar el valor ya que es doblemente recursivar, en factorail, es simple recursiva osea solo 1 ves 



//int Fibonacci(int n){
  //  return n<2 ? n:Fibonacci(n-1) + Fibonacci(n-2);
//}

int Fibonacci(int n){
    return n == 0? 0:n==1 ?:Fibonacci(n-1) +Fibonacci(n-2);
}


//El if else es para acciones, el operador condicional para valores//Siempre confiar en los aserts
