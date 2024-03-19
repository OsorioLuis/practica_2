#include <iostream>


int main() {
    //no funciona si por ejemplo se toma 78541
    int value, temp, eval;
    int change[11] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50,10};
    std::cout<<"Ingresa un valor: ";std::cin>>value;

    value = abs(value);

    for(int i = 0; i < 11; i++){
        //agregamos la cantidad de billetes
        //la division es solo un digito, si el numero a dividir es menor al dividendo
        //entonces será 0, funciona como un contador
        temp = value / change[i];

        //realizamos el modulo de la division, este hace la division con el numero
        //menor posible para la division, constantemante reescribimos la division
        eval = value % change[i];
        value = eval; //ahora tendrá el valor según la cantidad minima que quepa en el resultado
        //de la divisin

        //para el sobrante, si el modulo es 0 es porque ya no tiene un divisor para continuar el contador
        if(value == 0){
            std::cout<<"El valor sobrante es: "<<temp;
        }else{
            std::cout<<change[i]<<" : "<<temp<<std::endl;
        }
    }
    std::cout<<40 % 10<<std::endl;
    //std::cout<<67340 / 50000;


    return 0;
}

