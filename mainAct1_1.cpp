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

/* int fibonacciIterativo(int n){

} */

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

    /* std::cout << "Fibonacci por Iteracion: " << *Aqui va la llamada a la iterativa* << std::endl; */
    std::cout << "Fibonacci por Recursion: " << fibonacciRecursivo(9) << std::endl;


    return 0;
}