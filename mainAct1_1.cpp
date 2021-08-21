//Programa que incluye 3 funciones que calculan una sumatoria de 1 a n de forma recursiva, iterativa y directa.
//También encontramos dos funciones que calculan el n-ésimo número de la serie de Fibonacci de forma recursiva e iterativa.
//Código por Jonathan Joaquín Quirino Carrasco A01640100 & Juan Pablo Pérez Durán A01639947
//Fecha de Creación: agosto 13, 2021  |  Última Fecha de Modificación: agosto XX, 2021

#include <iostream>
#include <vector>



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

    int resultado = (n*(n + 1)) / 2;
    return resultado;
}

int fibonacciIterativo(int n){

    int resultado;
    int buffer = 1;
    int buffer_ = 1;

    if (n < 3) {

        resultado = 1;

    } else {

        for (int i = 1; i < n + 1; i++) {

            if (i == 1 || i == 2) {

                std::cout << "F(" << i << "): " << 1 << std::endl;       

            } else {

                resultado = buffer + buffer_;
                std::cout << "F(" << i << "): " << resultado << std::endl; 
                buffer_ = buffer;
                buffer = resultado; 

            }
        }
    }

    return 1;

}

int fibonacciRecursivo(int n){

    int resultado;

    if (n <= 1){
        return n;
    } else {
        resultado = fibonacciRecursivo(n-1) + fibonacciRecursivo(n-2);
        return resultado;
    }
}

int main(){

    std::cout << "Suma por Iteracion: " << sumaIterativa(6) << std::endl;
    std::cout << "Suma por Recursion: " << sumaRecursiva(6) << std::endl;
    std::cout << "Suma directa: " << sumaDirecta(6) << std::endl;

    std::cout << "\n";

    std::cout << "Fibonacci por Iteración: " << std::endl;
    fibonacciIterativo(8);

    std::cout << "Fibonacci por Recursion: " << std::endl;
    for (int i = 1; i < 9; i++) {
        std::cout << "F(" << i << "): " << fibonacciRecursivo(i) << std::endl;
    }

    return 0;
    
}