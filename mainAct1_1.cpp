#include <iostream>

/* TAMBIEN FALTA LA DE LA SUMA DIRECTA */


int sumaIterativa(int n){
    int retValue = 0;

    if (n >= 0){
        while (n >= 0){
        retValue = retValue + n;
        n--;
        }
    }
    return retValue;
}

int sumaRecursiva(int n){
    if (n <= 0){
        return 0;
    } else{
        return n + sumaRecursiva(n - 1);
    }
}

int sumaDirecta(int n) {

    int resultado = 0;
    for (int i = 0; i < n;i++) {

        resultado = resultado + 1 + n;

    }
    return resultado;
}

int fibonacciIterativo(int n){

    int resultado;
    int buffer = 1;
    int buffer_ = 1;
    if (n < 3) {
        resultado = 1;
    } else {
        for (int i = 2; i < n; i++) {
            resultado = buffer + buffer_;
            buffer_ = buffer;
            buffer = resultado; 
        }
    }
    return resultado;
}

int fibonacciRecursivo(int n){

    if (n <= 1){
        return n;
    } else{
        return fibonacciRecursivo(n-1) + fibonacciRecursivo(n-2);
    }
}

int main(){

    std::cout << "Suma por Iteracion: " << sumaIterativa(6) << std::endl;
    std::cout << "Suma por Recursion: " << sumaRecursiva(6) << std::endl;

    std::cout << "\n";

    std::cout << "Suma directa: " << sumaDirecta(10) << std::endl;

    std::cout << "\n";

    std::cout << "Fibonacci por Iteración: " << fibonacciIterativo(35) << std::endl;
    std::cout << "Fibonacci por Recursion: " << fibonacciRecursivo(35) << std::endl;


    return 0;
}