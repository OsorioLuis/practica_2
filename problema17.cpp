#include <iostream>

//declaracion de funciones
int sumDivisors(int number);
int verifyAmigables(int number);

int main17(){
    int number;
    std::cout<<"Ingresa el numero que desees: ";std::cin>>number;

    int result = verifyAmigables(number);
    //condicional para verificar si es amigable o no
    if(result == 0){
        std::cout<<"el numero no es amigable";
    }else{
        std::cout<<"el numero es amigable, suma es: "<<result;
    }

    return 0;
}
int sumDivisors(int number){ //esta funcion calcula la suma de los divisiores, funciona de forma general y puede
    //funcionar con cualquier parametro
    int temp = 0, sum = 0;

    //este bucle se encarga de hacer la suma de todos los divisores enteros del numero ingresado.
    for(int i = 1; i <= number;i++){
        if(number % i == 0){
            if(i != number){
                sum += i; //este funciona como bandera en caso de que llegue al numero deseado
            }
        }
    }
    return sum;
}

//esta funcion simplemente hace la verificacion  de dos numeros usando la funcion de arriba
//siempre y cuando cumpla el primer condicional la funcion retornara el valor de la suma o un 0
int verifyAmigables(int number){
    int first = sumDivisors(number);
    int second = sumDivisors(first);

    if(second == number){
        return second + first;
    }
    return 0;
}


